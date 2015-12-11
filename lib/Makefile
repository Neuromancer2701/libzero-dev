################################################################################
# Automatically-generated file. Do not edit!
################################################################################
MK_DIR = mkdir -p

CXX_PP = arm-none-eabi-gcc

# List the subdirectories for creating object files
INCLUDE_DIRS += \
applications/hal_usb_demo/hal_usb_demo/USB \
hal/hpl/usb \
hal/hpl/pac \
samd21a/gcc/gcc \
hal/hpl/dsu \
thirdparty/RTOS/freertos/FreeRTOSV8.2.0/Source/portable/GCC/ARM_CM0 \
hal/hpl/adc \
hal/hpl/core \
usb \
hal/hpl/eic \
hal/src \
utils/src \
hal/hpl/pm \
hal/hpl/gclk \
hal/hpl/tc \
thirdparty/RTOS/freertos/FreeRTOSV8.2.0 \
thirdparty/RTOS/freertos/FreeRTOSV8.2.0/Source \
hal/hpl/sysctrl \
usb/device \
thirdparty/RTOS/freertos/FreeRTOSV8.2.0/Source/portable/MemMang \
samd21a/gcc \
hal/hpl/port


# List the dependency files
FILES 	:= $(wildcard *.) $(wildcard */*.c)
OBJS 	:= $(FILES:.c=.o)
DEPENDS := $(FILES:.c=.d)

TARGET :=libZero
QUOTE := "
OUTPUT_FILE_PATH +=$(OUTPUT_FILE_NAME).so
OUTPUT_FILE_PATH_AS_ARGS +=$(OUTPUT_FILE_NAME).so

# All Target
all: $(TARGET)

# Linker target
$(TARGET): $(OBJS)
	@echo Building target: $@
	@echo Invoking:ARM/GNU Linker
	$(CXX_PP)  -o $(TARGET).so $(OBJS) -Wl,--start-group -lm  -Wl,--end-group  -mthumb -Wl" --specs=nano.specs -Wl,--gc-sections -mcpu=cortex-m0plus -T"../samd21a/gcc/gcc/samd21j18a_flash.ld" -shared 
	@echo Finished building target: $@

	#"arm-none-eabi-objcopy" -O binary "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).bin" 
	#"arm-none-eabi-objcopy" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).hex"
	#"arm-none-eabi-objcopy" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0 --no-change-warnings -O binary "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).eep" || exit 0
	#"arm-none-eabi-objdump" -h -S "$(OUTPUT_FILE_NAME).elf" > "$(OUTPUT_FILE_NAME).lss"
	#"arm-none-eabi-size" "$(OUTPUT_FILE_NAME).elf"

# Compiler target(s)
.c.o: 
	$(CXX_PP) -x c -mthumb  -D__SAMD21J18A__ -DDEBUG -O1 -ffunction-sections -mlong-calls -g3 -Wall -mcpu=cortex-m0plus -c -std=gnu99  -I"" -I"hal/hpl/sysctrl" -I"usb" -I"hal/hpl/port" -I"hal/hpl/tc" -I"thirdparty/RTOS/freertos/FreeRTOSV8.2.0/module_config" -I"hal/hpl/include" -I"CMSIS/Include/" -I"thirdparty/RTOS/freertos/FreeRTOSV8.2.0/Source/portable/GCC/ARM_CM0" -I"hal/hpl/pm" -I"hal/hpl/gclk" -I"hal/hpl/eic" -I"hal/hpl/dsu" -I"hal/include" -I"samd21a/include" -I"config" -I"usb/device" -I"thirdparty/RTOS/freertos/FreeRTOSV8.2.0/Source/include" -I"thirdparty/RTOS" -I"hal/hpl/adc" -I"hal/hpl/core" -I"hal/hri" -I"thirdparty/RTOS/freertos/FreeRTOSV8.2.0" -I"applications/hal_usb_demo/hal_usb_demo/USB" -I"hal/hpl/pac" -I"hal/hpl/usb" -I"utils/include" -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"

#%.o: %.c
#	@echo Building file: $<
#	@echo ARM/GNU C Compiler
#	 -x c -mthumb  -D__SAMD21J18A__ -DDEBUG -O1 -ffunction-sections -mlong-calls -g3 -Wall -mcpu=cortex-m0plus -c -std=gnu99  -I"../" -I"../hal/hpl/sysctrl" -I"../usb" -I"../hal/hpl/port" -I"../hal/hpl/tc" -I"../thirdparty/RTOS/freertos/FreeRTOSV8.2.0/module_config" -I"../hal/hpl/include" -I"../CMSIS/Include/" -I"../thirdparty/RTOS/freertos/FreeRTOSV8.2.0/Source/portable/GCC/ARM_CM0" -I"../hal/hpl/pm" -I"../hal/hpl/gclk" -I"../hal/hpl/eic" -I"../hal/hpl/dsu" -I"../hal/include" -I"../samd21a/include" -I"../config" -I"../usb/device" -I"../thirdparty/RTOS/freertos/FreeRTOSV8.2.0/Source/include" -I"../thirdparty/RTOS" -I"../hal/hpl/adc" -I"../hal/hpl/core" -I"../hal/hri" -I"../thirdparty/RTOS/freertos/FreeRTOSV8.2.0" -I"../applications/hal_usb_demo/hal_usb_demo/USB" -I"../hal/hpl/pac" -I"../hal/hpl/usb" -I"../utils/include" -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
#	@echo Finished building: $<


# Detect changes in the dependent files and recompile the respective object files.
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(DEPS)),)
-include $(DEPS)
endif
endif

$(SUB_DIRS):
	$(MK_DIR) "$@"

clean:
	rm -rf *.o
	rm -f $(OUTPUT_FILE_PATH)
	rm -rf *.d
	rm -f $(OUTPUT_FILE_NAME).a $(OUTPUT_FILE_NAME).hex $(OUTPUT_FILE_NAME).bin $(OUTPUT_FILE_NAME).lss $(OUTPUT_FILE_NAME).eep $(OUTPUT_FILE_NAME).map $(OUTPUT_FILE_NAME).srec