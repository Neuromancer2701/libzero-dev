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

HAL_DIRS := hal/hri
HAL_DIRS += hal/include 
HAL_DIRS += hal/hpl/include
HAL_DIRS += hal/hpl/core
HAL_DIRS += hal/hpl/sysctrl 
HAL_DIRS += hal/hpl/usb
HAL_DIRS += hal/hpl/port
HAL_DIRS += hal/hpl/pm 
HAL_DIRS += hal/hpl/gclk 
HAL_DIRS += hal/hpl/eic 

INC_DIRS := samd21a/include
INC_DIRS += CMSIS/Include/
INC_DIRS += config
INC_DIRS += utils/src
INC_DIRS += utils/include 
INC_DIRS += usb
INC_DIRS += usb/device
INC_DIRS += $(BASE_DIR)
INC_DIRS += $(HAL_DIRS)

INCLUDE_PATHS := $(foreach d, $(INC_DIRS), -I$d)

# List the dependency files
FILES 	:= $(shell find $(BASE_DIR) -name '*.c')
OBJS 	:= $(FILES:.c=.o)
DEPENDS := $(FILES:.c=.d)

TARGET := libZero

LINKER_SCRIPT := samd21a/gcc/gcc/samd21j18a_flash.ld


