################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../startup/startup_stm32.s 

OBJS += \
./startup/startup_stm32.o 


# Each subdirectory must supply rules for building sources it contributes
startup/%.o: ../startup/%.s
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Assembler'
	@echo %cd%
	arm-none-eabi-as -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib" -I"C:/Users/Keith-School/Desktop/cet400/senior_proj/inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/CMSIS/core" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/CMSIS/device" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/HAL_Driver/Inc/Legacy" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/HAL_Driver/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/AUDIO/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/HID/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/MTP/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/Template/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Core/Inc" -I"C:/Users/Keith-School/Desktop/cet400/senior_proj/Motor_Control_Lib/inc" -g -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


