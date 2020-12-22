################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../src/ldso/arm/dlsym.S 

C_SRCS += \
../src/ldso/arm/find_exidx.c 

C_DEPS += \
./src/ldso/arm/find_exidx.d 

OBJS += \
./src/ldso/arm/dlsym.o \
./src/ldso/arm/find_exidx.o 

S_UPPER_DEPS += \
./src/ldso/arm/dlsym.d 


# Each subdirectory must supply rules for building sources it contributes
src/ldso/arm/%.o: ../src/ldso/arm/%.S
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
src/ldso/arm/%.o: ../src/ldso/arm/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\Users\bmjia\Desktop\trunk-435\trunk\musl-1.1.18\arch\arm" -I"C:\Users\bmjia\Desktop\trunk-435\trunk\musl-1.1.18\src\internal" -I"C:\Users\bmjia\Desktop\trunk-435\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

