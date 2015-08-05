cmake_minimum_required(VERSION 3.2)
#custom command to use objcopy to create .bin files out of ELF files
function(make_firmware TARGET_NAME)

    if(NOT EXECUTABLE_OUTPUT_PATH)
      set(EXECUTABLE_OUTPUT_PATH "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
    endif()
    set(TARGET_PATH ${EXECUTABLE_OUTPUT_PATH}/${TARGET_NAME})
    set(PROJECT_OUTPUT_DIRECTORY "/home/countzero/repos/libzero-dev/output")
    set(PROJECT_PATH ${PROJECT_OUTPUT_DIRECTORY}/${TARGET_NAME})


    #/opt/openocd/share/openocd/scripts/board/atmel_samd21_xplained_pro.cfg


    openocd -s /opt/openocd/share/openocd/scripts/ -f board/atmel_samd21_xplained_pro.cfg

board/atmel_samd21_xplained_pro.cfg
    # Convert firmware image to ASCII HEX format
    add_custom_command(TARGET ${TARGET_NAME} POST_BUILD
                        COMMAND ${CMAKE_OBJCOPY}
                        ARGS    ${OBJCOPY_HEX_FLAGS}
                                ${TARGET_PATH}
                                ${PROJECT_PATH}.hex
                        COMMENT "Generating HEX image"
                        VERBATIM)
endfunction(make_firmware)

set(OBJCOPY_HEX_FLAGS -O ihex CACHE STRING "")


project(projectfiles)

set(REPOS_DIR "/home/countzero/repos/libzero-dev")

# Supported C libraries
set(SUPPORTED_CLIBS newlib )

# Supported hosting settings
set(SUPPORTED_HOSTING none nohost semihosting)

set(DEVICE SAMD21)

# Set Linker Script dir
set(LINKER_SCRIPT_DIR "${REPOS_DIR}/ldscripts")
set(LINKER_SCRIPT "${LINKER_SCRIPT_DIR}/flash_with_bootloader.ld")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
SET( CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} --specs=nosys.specs" )

set(SOURCE_FILES main.cpp)
add_executable(hello_image ${SOURCE_FILES})
make_firmware(hello_image)