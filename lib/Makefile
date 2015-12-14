################################################################################
# Automatically-generated file. Do not edit!
################################################################################
MK_DIR = mkdir -p

GCC_BASE = /usr/
GCC_BIN  = $(GCC_BASE)bin/
GCC_LIB  = $(GCC_BASE)arm-none-eabi/lib/
GCC_INC  = $(GCC_BASE)arm-none-eabi/include/
AS       = $(GCC_BIN)arm-none-eabi-as
CC       = $(GCC_BIN)arm-none-eabi-gcc
CPP      = $(GCC_BIN)arm-none-eabi-g++
LD       = $(GCC_BIN)arm-none-eabi-gcc
OBJCOPY  = $(GCC_BIN)arm-none-eabi-objcopy


BASE_DIR = .

# List the subdirectories for creating object files
 
HAL_DIRS := hal/hpl/usb 
HAL_DIRS += hal/hpl/pac
HAL_DIRS += hal/hpl/pm 
HAL_DIRS += hal/hpl/gclk 
HAL_DIRS += hal/hpl/tc
HAL_DIRS += hal/hpl/dsu
HAL_DIRS += hal/hpl/eic 
HAL_DIRS += hal/src
HAL_DIRS += hal/hpl/adc 
HAL_DIRS += hal/hpl/core
HAL_DIRS += hal/hpl/port
HAL_DIRS += hal/hpl/sysctrl 
HAL_DIRS += hal/include 
HAL_DIRS += hal/hpl/include
HAL_DIRS += hal/hri
 
PROCESSOR_DIRS := samd21a/gcc/gcc
PROCESSOR_DIRS += samd21a/gcc 
PROCESSOR_DIRS += samd21a/include
PROCESSOR_DIRS += CMSIS/Include/
PROCESSOR_DIRS += config

RTOS_DIRS := thirdparty/RTOS/freertos/FreeRTOSV8.2.0/Source/portable/GCC/ARM_CM0 
RTOS_DIRS += thirdparty/RTOS/freertos/FreeRTOSV8.2.0
RTOS_DIRS += thirdparty/RTOS/freertos/FreeRTOSV8.2.0/Source 
RTOS_DIRS += thirdparty/RTOS/freertos/FreeRTOSV8.2.0/Source/portable/MemMang
RTOS_DIRS += thirdparty/RTOS/freertos/FreeRTOSV8.2.0/Source/include  
 
UTILS_DIRS := utils/src
UTILS_DIRS := utils/include 

USB_DIRS := usb
USB_DIRS := usb/device 

HAL_INC=$(foreach d, $(HAL_DIRS), -I$d)
PROCESSOR_INC=$(foreach d, $(PROCESSOR_DIRS), -I$d)
RTOS_INC=$(foreach d, $(RTOS_DIRS), -I$d)
UTILS_INC=$(foreach d, $(UTILS_DIRS), -I$d)
USB_INC=$(foreach d, $(USB_DIRS), -I$d)

INCLUDE_PATHS := $(HAL_INC)
INCLUDE_PATHS += $(PROCESSOR_INC)
INCLUDE_PATHS += $(RTOS_INC)
INCLUDE_PATHS += $(UTILS_INC)
INCLUDE_PATHS += $(USB_INC)

# List the dependency files
FILES 	:= $(shell find $(BASE_DIR) -name '*.c')
OBJS 	:= $(FILES:.c=.o)
DEPENDS := $(FILES:.c=.d)

TARGET := libZero

LINKER_SCRIPT := samd21a/gcc/gcc/samd21j18a_flash.ld

LD_FLAGS := -mthumb -mcpu=cortex-m0
LD_FLAGS +=  --specs=nano.specs --gc-sections -T$(LINKER_SCRIPT) -shared 
CC_FLAGS := -x c -mthumb  -D__SAMD21J18A__ -DDEBUG -O1 -ffunction-sections -mlong-calls -g3 -Wall -mcpu=cortex-m0plus -c -std=gnu99
CC_FLAGS += $(INCLUDE_PATHS)
CC_FLAGS += -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o

# All Target
all: $(TARGET).so

# Linker target
$(TARGET).so: $(OBJS)
	@echo Building target: $@
	@echo Invoking:ARM/GNU Linker
	$(LD) $(LD_FLAGS) o $@ $^
	@echo Finished building target: $@

	#"arm-none-eabi-objcopy" -O binary "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).bin" 
	#"arm-none-eabi-objcopy" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).hex"
	#"arm-none-eabi-objcopy" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0 --no-change-warnings -O binary "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).eep" || exit 0
	#"arm-none-eabi-objdump" -h -S "$(OUTPUT_FILE_NAME).elf" > "$(OUTPUT_FILE_NAME).lss"
	#"arm-none-eabi-size" "$(OUTPUT_FILE_NAME).elf"

# Compiler target(s)
.c.o:
	$(CC) $(CC_FLAGS) $@ $<

#%.o: %.c
#	@echo Building file: $<
#	@echo ARM/GNU C Compiler
#	 -x c -mthumb  -D__SAMD21J18A__ -DDEBUG -O1 -ffunction-sections -mlong-calls -g3 -Wall -mcpu=cortex-m0plus -c -std=gnu99  -I"../" -I"../hal/hpl/sysctrl" -I"../usb" -I"../hal/hpl/port" -I"../hal/hpl/tc" -I"../thirdparty/RTOS/freertos/FreeRTOSV8.2.0/module_config" -I"../hal/hpl/include" -I"../CMSIS/Include/" -I"../thirdparty/RTOS/freertos/FreeRTOSV8.2.0/Source/portable/GCC/ARM_CM0" -I"../hal/hpl/pm" -I"../hal/hpl/gclk" -I"../hal/hpl/eic" -I"../hal/hpl/dsu" -I"../hal/include" -I"../samd21a/include" -I"../config" -I"../usb/device" -I"../thirdparty/RTOS/freertos/FreeRTOSV8.2.0/Source/include" -I"../thirdparty/RTOS" -I"../hal/hpl/adc" -I"../hal/hpl/core" -I"../hal/hri" -I"../thirdparty/RTOS/freertos/FreeRTOSV8.2.0" -I"../applications/hal_usb_demo/hal_usb_demo/USB" -I"../hal/hpl/pac" -I"../hal/hpl/usb" -I"../utils/include" -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
#	@echo Finished building: $<


# Detect changes in the dependent files and recompile the respective object files.
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(DEPENDS)),)
-include $(DEPENDS)
endif
endif

$(SUB_DIRS):
	$(MK_DIR) "$@"

clean:
	rm -rf *.o
	rm -f $(OUTPUT_FILE_PATH)
	rm -rf *.d
	rm -f $(OUTPUT_FILE_NAME).a $(OUTPUT_FILE_NAME).hex $(OUTPUT_FILE_NAME).bin $(OUTPUT_FILE_NAME).lss $(OUTPUT_FILE_NAME).eep $(OUTPUT_FILE_NAME).map $(OUTPUT_FILE_NAME).srec