################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/GESSE/Desktop/WORKSPACE_edf/DRV/SYSTEM/SOURCE/DRV/sys_cfg_stm32f407.c \
C:/Users/GESSE/Desktop/WORKSPACE_edf/DRV/SYSTEM/SOURCE/DRV/sys_cfg_stm32f407_interrupts.c 

OBJS += \
./DRV-SYS/sys_cfg_stm32f407.o \
./DRV-SYS/sys_cfg_stm32f407_interrupts.o 

C_DEPS += \
./DRV-SYS/sys_cfg_stm32f407.d \
./DRV-SYS/sys_cfg_stm32f407_interrupts.d 


# Each subdirectory must supply rules for building sources it contributes
DRV-SYS/sys_cfg_stm32f407.o: C:/Users/GESSE/Desktop/WORKSPACE_edf/DRV/SYSTEM/SOURCE/DRV/sys_cfg_stm32f407.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DARM_MATH_CM4 -DDEBUG -DSTM32F407xx -c -I../Inc -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/COMMON/StdHeaders" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/DRV/GPIO/SOURCE/DRV" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Drivers/CMSIS/Include" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Drivers/CMSIS/Lib" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/DRV/SYSTEM/SOURCE/DRV" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Src/MS" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Src/SEGGER" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Src/FreeRTOS_Source/portable/GCC/ARM_CM4F" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Src" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Src/FreeRTOS_Source" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Src/FreeRTOS_Source/include" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Src/FreeRTOS_Source/portable" -I../Drivers/CMSIS/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"DRV-SYS/sys_cfg_stm32f407.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
DRV-SYS/sys_cfg_stm32f407_interrupts.o: C:/Users/GESSE/Desktop/WORKSPACE_edf/DRV/SYSTEM/SOURCE/DRV/sys_cfg_stm32f407_interrupts.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DARM_MATH_CM4 -DDEBUG -DSTM32F407xx -c -I../Inc -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/COMMON/StdHeaders" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/DRV/GPIO/SOURCE/DRV" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Drivers/CMSIS/Include" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Drivers/CMSIS/Lib" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/DRV/SYSTEM/SOURCE/DRV" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Src/MS" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Src/SEGGER" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Src/FreeRTOS_Source/portable/GCC/ARM_CM4F" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Src" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Src/FreeRTOS_Source" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Src/FreeRTOS_Source/include" -I"C:/Users/GESSE/Desktop/WORKSPACE_edf/FreeRTOS/Src/FreeRTOS_Source/portable" -I../Drivers/CMSIS/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"DRV-SYS/sys_cfg_stm32f407_interrupts.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

