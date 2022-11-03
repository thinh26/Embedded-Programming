################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Lap_trinh_GPIO_co_ban
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Lap_trinh_GPIO_co_ban.elf \

MAP_FILES += \
Lap_trinh_GPIO_co_ban.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Lap_trinh_GPIO_co_ban.list \

OBJCOPY_HEX += \
Lap_trinh_GPIO_co_ban.hex \


# All Target
all: main-build

# Main-build Target
main-build: Lap_trinh_GPIO_co_ban.elf secondary-outputs

# Tool invocations
Lap_trinh_GPIO_co_ban.elf Lap_trinh_GPIO_co_ban.map: $(OBJS) $(USER_OBJS) D:\Code\Lap_trinh_nhung\STM32\Project\ 1.0\ -\ Lap\ trinh\ GPIO\ co\ ban\Cube_IDE\STM32F401VETX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "Lap_trinh_GPIO_co_ban.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"D:\Code\Lap_trinh_nhung\STM32\Project 1.0 - Lap trinh GPIO co ban\Cube_IDE\STM32F401VETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Lap_trinh_GPIO_co_ban.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Lap_trinh_GPIO_co_ban.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Lap_trinh_GPIO_co_ban.list"
	@echo 'Finished building: $@'
	@echo ' '

Lap_trinh_GPIO_co_ban.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "Lap_trinh_GPIO_co_ban.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) Lap_trinh_GPIO_co_ban.elf Lap_trinh_GPIO_co_ban.hex Lap_trinh_GPIO_co_ban.list Lap_trinh_GPIO_co_ban.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
