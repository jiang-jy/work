# coding: utf-8
#
# EL_DeviceDescription_3_1_6r5.json (http://sh-center.org/sdk の中ほどに所在)
# をパースし、デバイスやプロパティの一覧を出力
#

require "json"

# val::Hash{prop_id(Hex)=>
#           Hash{"propertyName" =>
#               Hash{ "en" => String(property name), "ja" => String(property name)}
#           }
#      }
def print_properties( val, indent="  " )
    val.each{|prop_id, val2| 
        if val2['oneOf'] then
            print( "#{indent}oneOf\n" )
            val2['oneOf'].each{ |val3|
                print( "#{indent}    #{val3['propertyName']['en']} = #{prop_id}\n" )
            }
        else
            print( "#{indent}#{val2['propertyName']['en']} = #{prop_id}\n" )
            #print("#{indent} #{val2['data']['$ref']}\n" )
               if val2['data'] && val2['data']['$ref'] then
                    ref = val2['data']['$ref'].sub( /#\/definitions\//, "" )

                    val3 = Definitions[ref]
                    if val3['type'] == "state" then
                        print "#{indent}  state_type = '#{ref}'\n"
                        print_state_type( indent + "    ", val3 )
                    elsif val3['type'] == "number" then
                        print "#{indent}  number_type = '#{ref}'\n"
                        print_number_type( indent + "    ", val3 )
                    end
                  
              else
                  print "#{indent}  data or ref not defined\n"
              end
        end
    }
end


def print_properties2( val, indent="  " )
    val.each{|prop_id, val2|
    if val2['oneOf'] then
            puts prop_id
            print( "#{indent}oneOf\n" )
            val2['oneOf'].each{ |val3|
                print( "#{indent}    #{val3['propertyName']['en']} = #{prop_id}\n" )
            }
    else
        puts prop_id
        propertyName = val2['propertyName']
        func_name =  func_name['en'] if func_name != nil
        accessRule = val2['accessRule']
        func_name =  func_name['get'] if func_name != nil
        data = val2['data']
        func_name = func_name['$ref'] if func_name !=nil

        #for 0B1
        oneOf = val2['oneOf']
        #func_name = func_name[]


        puts propertyName
        puts accessRule
        puts data
        
        puts oneOf
    end
        #puts func_name
        #p val2
=begin     
        if val2['oneOf'] then
            print( "#{indent}oneOf\n" )
            val2['oneOf'].each{ |val3|
                print( "#{indent}    #{val3['propertyName']['en']} = #{prop_id}\n" )
            }
        else
            print( "#{indent}#{val2['propertyName']['en']} = #{prop_id}\n" )
            #print("#{indent} #{val2['data']['$ref']}\n" )
               if val2['data'] && val2['data']['$ref'] then
                    ref = val2['data']['$ref'].sub( /#\/definitions\//, "" )

                    val3 = Definitions[ref]
                    if val3['type'] == "state" then
                        print "#{indent}  state_type = '#{ref}'\n"
                        print_state_type( indent + "    ", val3 )
                    elsif val3['type'] == "number" then
                        print "#{indent}  number_type = '#{ref}'\n"
                        print_number_type( indent + "    ", val3 )
                    end
                  
              else
                  print "#{indent}  data or ref not defined\n"
              end
        end
=end
    
    }
end


def print_state_type indent, val
    val['enum'].each{ |edt|
        print "#{indent}#{edt['state']['en']} = #{edt['edt']}\n"
    }
end

def print_number_type indent, val
    print( "#{indent}type=#{val['format']} min=#{val['minimum']} max=#{val['maximum']}\n" )
end

# Echonet Lite Device Description in JSON
#devdesc_json_fname = "appendix_v3-1-6r5/EL_DeviceDescription_3_1_6r5.json"
devdesc_json_fname = "demo2.json"

# Read Device Description (String)
devdesc_json = File.read(devdesc_json_fname)

# Convert JSON String to Hash
DevDesc = JSON[devdesc_json]
Devices = DevDesc['devices']
Definitions = DevDesc["definitions"]

Devices.each{ |id, val|
    if val['oneOf'] then
        print( "#{id} oneOf\n" )
        val['oneOf'].each{|val2|
            print( "  #{val2['className']['en']}\n" )
            print_properties( val2['elProperties'], "  " )
        }
    elsif val['className'] == nil then
        print "*** #{id} has no class name ***\n"
    elsif val['className']['en'] then
        print( "#{val['className']['en']} = #{id}\n" )
        print_properties2( val['elProperties'] )
    elsif val['className']['ja'] then
        print( "#{val['className']['ja']} = #{id}\n" )
        print_properties( val['elProperties'] )
    else
        print "### #{id} has class name but has neither 'ja' nor 'en' ***\n"
    end
}
#0X0290 = DevDesc["0x0290"]
#0XC0 = DevDesc["0xC0"]


# print definitions
# Definitions.each{ |id,val|
#     if val['size'] then
#         print("#{id}\n")
#         print(" size = #{val['size']}\n")
#         i=0
#         while val['enum'][i] do
#             print(" #{val['enum'][i]['edt']} = #{val['enum'][i]['state']['en']}\n")
#             i=i+1
#         end
#     end
# }

# print all devices



