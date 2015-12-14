################################################################################
# Automatically-generated file. Do not edit!
################################################################################

ifdef SystemRoot
	SHELL = cmd.exe
	MK_DIR = mkdir
else
	ifeq ($(shell uname), Linux)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), CYGWIN)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), MINGW32)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), MINGW64)
		MK_DIR = mkdir -p
	endif
endif

# List the subdirectories for creating object files
SUB_DIRS += \
hal/hpl/core \
usb/device \
applications/hal_usb_demo/hal_usb_demo/USB \
hal/hpl/eic \
hal/hpl/usb \
hal/src \
utils/src \
samd21a/gcc \
hal/hpl/pm \
hal/hpl/gclk \
samd21a/gcc/gcc \
hal/hpl/port \
hal/hpl/sysctrl \
usb

# List the object files
OBJS += \
hal/hpl/gclk/hpl_gclk1_v210_base.o \
samd21a/gcc/system_samd21.o \
hal/src/hal_ext_irq.o \
main.o \
hal/hpl/port/hpl_port_v100.o \
utils/src/utils_syscalls.o \
utils/src/utils_assert.o \
usb/device/usbdc.o \
applications/hal_usb_demo/hal_usb_demo/USB/usbd_cdc_ser_echo.o \
hal/src/hal_usb_device.o \
hal/hpl/core/hpl_init.o \
utils/src/utils_list.o \
hal/hpl/core/hpl_core_m0plus_base.o \
hal/src/hal_gpio.o \
hal/src/hal_init.o \
utils/src/utils_event.o \
hal/hpl/sysctrl/hpl_sysctrl_v201a.o \
usb_main.o \
hal/src/hal_delay.o \
samd21a/gcc/gcc/startup_samd21.o \
hal/hpl/pm/hpl_pm1_v201.o \
atmel_start.o \
hal/src/hal_atomic.o \
hal/src/hal_sleep.o \
hal/hpl/eic/hpl_eic1_v101a.o \
hal/src/hal_io.o \
hal/hpl/usb/hpl_usb_v101.o \
usb/usb_protocol.o

OBJS_AS_ARGS += \
"hal/hpl/gclk/hpl_gclk1_v210_base.o" \
"samd21a/gcc/system_samd21.o" \
"hal/src/hal_ext_irq.o" \
"main.o" \
"hal/hpl/port/hpl_port_v100.o" \
"utils/src/utils_syscalls.o" \
"utils/src/utils_assert.o" \
"usb/device/usbdc.o" \
"applications/hal_usb_demo/hal_usb_demo/USB/usbd_cdc_ser_echo.o" \
"hal/src/hal_usb_device.o" \
"hal/hpl/core/hpl_init.o" \
"utils/src/utils_list.o" \
"hal/hpl/core/hpl_core_m0plus_base.o" \
"hal/src/hal_gpio.o" \
"hal/src/hal_init.o" \
"utils/src/utils_event.o" \
"hal/hpl/sysctrl/hpl_sysctrl_v201a.o" \
"usb_main.o" \
"hal/src/hal_delay.o" \
"samd21a/gcc/gcc/startup_samd21.o" \
"hal/hpl/pm/hpl_pm1_v201.o" \
"atmel_start.o" \
"hal/src/hal_atomic.o" \
"hal/src/hal_sleep.o" \
"hal/hpl/eic/hpl_eic1_v101a.o" \
"hal/src/hal_io.o" \
"hal/hpl/usb/hpl_usb_v101.o" \
"usb/usb_protocol.o"

# List the dependency files
DEPS := $(OBJS:%.o=%.d)

DEPS_AS_ARGS += \
"hal/hpl/gclk/hpl_gclk1_v210_base.d" \
"samd21a/gcc/system_samd21.d" \
"hal/src/hal_ext_irq.d" \
"main.d" \
"hal/hpl/port/hpl_port_v100.d" \
"utils/src/utils_syscalls.d" \
"utils/src/utils_assert.d" \
"usb/device/usbdc.d" \
"applications/hal_usb_demo/hal_usb_demo/USB/usbd_cdc_ser_echo.d" \
"hal/src/hal_usb_device.d" \
"hal/hpl/core/hpl_init.d" \
"utils/src/utils_list.d" \
"hal/hpl/core/hpl_core_m0plus_base.d" \
"hal/src/hal_gpio.d" \
"hal/src/hal_init.d" \
"utils/src/utils_event.d" \
"hal/hpl/sysctrl/hpl_sysctrl_v201a.d" \
"usb_main.d" \
"hal/src/hal_delay.d" \
"samd21a/gcc/gcc/startup_samd21.d" \
"hal/hpl/pm/hpl_pm1_v201.d" \
"atmel_start.d" \
"hal/src/hal_atomic.d" \
"hal/src/hal_sleep.d" \
"hal/hpl/eic/hpl_eic1_v101a.d" \
"hal/src/hal_io.d" \
"hal/hpl/usb/hpl_usb_v101.d" \
"usb/usb_protocol.d"

OUTPUT_FILE_NAME :=AtmelStart
QUOTE := "
OUTPUT_FILE_PATH +=$(OUTPUT_FILE_NAME).elf
OUTPUT_FILE_PATH_AS_ARGS +=$(OUTPUT_FILE_NAME).elf

vpath %.c ../

# All Target
all: $(SUB_DIRS) $(OUTPUT_FILE_PATH)

# Linker target
$(OUTPUT_FILE_PATH): $(OBJS)
	@echo Building target: $@
	@echo Invoking:ARM/GNU Linker
	$(QUOTE)arm-none-eabi-gcc$(QUOTE)  -o $(OUTPUT_FILE_NAME).elf $(OBJS_AS_ARGS) -Wl,--start-group -lm  -Wl,--end-group  -mthumb -Wl,-Map="$(OUTPUT_FILE_NAME).map" --specs=nano.specs -Wl,--gc-sections -mcpu=cortex-m0plus -T"../samd21a/gcc/gcc/samd21j18a_flash.ld"
	@echo Finished building target: $@

	"arm-none-eabi-objcopy" -O binary "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).bin" 
	"arm-none-eabi-objcopy" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).hex"
	"arm-none-eabi-objcopy" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0 --no-change-warnings -O binary "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).eep" || exit 0
	"arm-none-eabi-objdump" -h -S "$(OUTPUT_FILE_NAME).elf" > "$(OUTPUT_FILE_NAME).lss"
	"arm-none-eabi-size" "$(OUTPUT_FILE_NAME).elf"

# Compiler target(s)

%.o: %.c
	@echo Building file: $<
	@echo ARM/GNU C Compiler
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -x c -mthumb  -D__SAMD21J18A__ -DDEBUG -O1 -ffunction-sections -mlong-calls -g3 -Wall -mcpu=cortex-m0plus -c -std=gnu99  -I"../" -I"../hal/include" -I"../hal/hpl/include" -I"../hal/hpl/core" -I"../CMSIS/Include/" -I"../hal/hpl/sysctrl" -I"../samd21a/include" -I"../config" -I"../hal/hpl/usb" -I"../usb" -I"../hal/hri" -I"../hal/hpl/port" -I"../hal/hpl/pm" -I"../usb/device" -I"../hal/hpl/gclk" -I"../hal/hpl/eic" -I"../applications/hal_usb_demo/hal_usb_demo/USB" -I"../utils/include" -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<


# Detect changes in the dependent files and recompile the respective object files.
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(DEPS)),)
-include $(DEPS)
endif
endif

$(SUB_DIRS):
	$(MK_DIR) "$@"

clean:
	rm -f $(OBJS_AS_ARGS)
	rm -f $(OUTPUT_FILE_PATH)
	rm -f $(DEPS_AS_ARGS)
	rm -f $(OUTPUT_FILE_NAME).a $(OUTPUT_FILE_NAME).hex $(OUTPUT_FILE_NAME).bin $(OUTPUT_FILE_NAME).lss $(OUTPUT_FILE_NAME).eep $(OUTPUT_FILE_NAME).map $(OUTPUT_FILE_NAME).srec