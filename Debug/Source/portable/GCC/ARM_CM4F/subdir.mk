################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Source/portable/GCC/ARM_CM4F/port.c 

OBJS += \
./Source/portable/GCC/ARM_CM4F/port.o 

C_DEPS += \
./Source/portable/GCC/ARM_CM4F/port.d 


# Each subdirectory must supply rules for building sources it contributes
Source/portable/GCC/ARM_CM4F/%.o: ../Source/portable/GCC/ARM_CM4F/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=softfp -mfpu=fpv4-sp-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F30X -DUSE_STDPERIPH_DRIVER -DHSE_VALUE=8000000 -I../include -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f3-stdperiph" -I"/home/forcexx/Dokumente/Mikrocontroller/ARM/workspace/STM32-freeRTOS/Source/include" -I"/home/forcexx/Dokumente/Mikrocontroller/ARM/workspace/STM32-freeRTOS/Source/portable/GCC/ARM_CM4F" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

