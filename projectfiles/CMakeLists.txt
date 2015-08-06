cmake_minimum_required(VERSION 3.2)

#custom command to use objcopy to create .bin files out of ELF files
function(make_firmware TARGET_NAME)

    if(NOT EXECUTABLE_OUTPUT_PATH)
      set(EXECUTABLE_OUTPUT_PATH "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
    endif()
    set(TARGET_PATH ${EXECUTABLE_OUTPUT_PATH}/${TARGET_NAME})


    # Convert firmware image to ASCII HEX format
    add_custom_command(TARGET ${TARGET_NAME} POST_BUILD
                        COMMAND ${CMAKE_OBJCOPY}
                        ARGS    ${OBJCOPY_HEX_FLAGS}
                                ${TARGET_PATH}
                                ${PROJECT_PATH}.hex
                        COMMENT "Generating HEX image"
                        VERBATIM)


                       #  -x "$(CHIP)_$(1).gdb" -ex "reset" -readnow -se "$(OUTPUT_BIN)_$(1).elf"


endfunction(make_firmware)

function(debug_firmware TARGET_NAME)

    if(NOT EXECUTABLE_OUTPUT_PATH)
      set(EXECUTABLE_OUTPUT_PATH "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
    endif()
    set(TARGET_PATH ${EXECUTABLE_OUTPUT_PATH}/${TARGET_NAME})
    set(GDB_ARGS  -x ${GDB_SCRIPT} -ex \"reset\" -readnow -se ${TARGET_PATH} )

    add_custom_command(TARGET ${TARGET_NAME} POST_BUILD
                        COMMAND ${ARM_GDB}
                        ARGS ${GDB_ARGS}
                        COMMENT "start GDB"
                        VERBATIM)

                       #  -x "$(CHIP)_$(1).gdb" -ex "reset" -readnow -se "$(OUTPUT_BIN)_$(1).elf"
endfunction(debug_firmware)

set(OBJCOPY_HEX_FLAGS -O ihex CACHE STRING "")
project(projectfiles)

set(REPOS_DIR "/home/countzero/repos/libzero-dev")
set(PROJECT_OUTPUT_DIRECTORY "${REPOS_DIR}/output")
set(PROJECT_PATH ${PROJECT_OUTPUT_DIRECTORY}/hello_image)

# Supported C libraries
set(SUPPORTED_CLIBS newlib )

# Supported hosting settings
set(SUPPORTED_HOSTING none nohost semihosting)

set(DEVICE SAMD21)

# Set Linker Script dir
set(SCRIPT_DIR "${REPOS_DIR}/scripts")
set(LINKER_SCRIPT "${SCRIPT_DIR}/flash_with_bootloader.ld")
set(GDB_SCRIPT "${SCRIPT_DIR}/zero.gdb")
set(BOARD_SCRIPT "arduino_zero.cfg")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} --specs=nosys.specs" )

set(SOURCE_FILES main.cpp)
add_executable(hello_image ${SOURCE_FILES})
make_firmware(hello_image)
execute_process(COMMAND source  ${REPOS_DIR}/zeroDev
                OUTPUT_VARIABLE EVN_SET)
debug_firmware(hello_image)


#/opt/openocd/share/openocd/scripts/board/atmel_samd21_xplained_pro.cfg
#target remote | openocd -c "interface cmsis-dap" -c "set CHIPNAME at91samd21g18" -f target/at91samdXX.cfg -c "gdb_port pipe; log_output openocd.log"


#openocd -s /opt/openocd/share/openocd/scripts/ -f board/atmel_samd21_xplained_pro.cfg

#board/atmel_samd21_xplained_pro.cfg