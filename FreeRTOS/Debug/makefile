################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/SEGGER/subdir.mk
-include Src/MS/subdir.mk
-include Src/FreeRTOS_Source/portable/MemMang/subdir.mk
-include Src/FreeRTOS_Source/portable/GCC/ARM_CM4F/subdir.mk
-include Src/FreeRTOS_Source/subdir.mk
-include Src/subdir.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include DRV_GPIO/subdir.mk
-include DRV-SYS/subdir.mk
-include CMN_STD/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
FreeRTOS.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
FreeRTOS.list \


# All Target
all: FreeRTOS.elf secondary-outputs

# Tool invocations
FreeRTOS.elf: $(OBJS) $(USER_OBJS) C:\Users\GESSE\Desktop\WORKSPACE_edf\FreeRTOS\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "FreeRTOS.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\GESSE\Desktop\WORKSPACE_edf\FreeRTOS\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="FreeRTOS.map" -Wl,--gc-sections -static -L"C:\Users\GESSE\Desktop\WORKSPACE_edf\FreeRTOS\Drivers\CMSIS\Lib" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

FreeRTOS.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "FreeRTOS.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
