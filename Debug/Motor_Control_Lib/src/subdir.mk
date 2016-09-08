################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Motor_Control_Lib/src/motor_Y.c \
../Motor_Control_Lib/src/utilities.c 

OBJS += \
./Motor_Control_Lib/src/motor_Y.o \
./Motor_Control_Lib/src/utilities.o 

C_DEPS += \
./Motor_Control_Lib/src/motor_Y.d \
./Motor_Control_Lib/src/utilities.d 


# Each subdirectory must supply rules for building sources it contributes
Motor_Control_Lib/src/%.o: ../Motor_Control_Lib/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo %cd%
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F4 -DSTM32 -DSTM32F411RETx -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib" -I"C:/Users/Keith-School/Desktop/cet400/senior_proj/inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/CMSIS/core" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/CMSIS/device" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/HAL_Driver/Inc/Legacy" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/HAL_Driver/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/AUDIO/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/HID/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/MTP/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Class/Template/Inc" -I"C:/Users/Keith-School/Desktop/cet400/cet400stepper_hal_lib/Middlewares/ST/STM32_USB_Host_Library/Core/Inc" -I"C:/Users/Keith-School/Desktop/cet400/senior_proj/Motor_Control_Lib/inc" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


