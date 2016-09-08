################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/main.c \
../src/stm32f4xx_it.c \
../src/syscalls.c \
../src/system_stm32f4xx.c 

OBJS += \
./src/main.o \
./src/stm32f4xx_it.o \
./src/syscalls.o \
./src/system_stm32f4xx.o 

C_DEPS += \
./src/main.d \
./src/stm32f4xx_it.d \
./src/syscalls.d \
./src/system_stm32f4xx.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo %cd%
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F4 -DSTM32 -DSTM32F411RETx -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib" -I"C:/Users/Keith-School/Desktop/cet400/senior_proj/inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/CMSIS/core" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/CMSIS/device" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/HAL_Driver/Inc/Legacy" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/HAL_Driver/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/AUDIO/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/HID/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/MTP/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/Template/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Core/Inc" -I"C:/Users/Keith-School/Desktop/cet400/senior_proj/Motor_Control_Lib/inc" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


