include(CMakeForceCompiler)
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR cortex-m0plus)
 
find_program(ARM_CC arm-none-eabi-gcc
    ${TOOLCHAIN_DIR}/bin
    )
find_program(ARM_CXX arm-none-eabi-g++
    ${TOOLCHAIN_DIR}/bin
    )
find_program(ARM_OBJCOPY arm-none-eabi-objcopy
    ${TOOLCHAIN_DIR}/bin
    )
find_program(ARM_SIZE_TOOL arm-none-eabi-size
    ${TOOLCHAIN_DIR}/bin)
 
CMAKE_FORCE_C_COMPILER(${ARM_CC} GNU)
CMAKE_FORCE_CXX_COMPILER(${ARM_CXX} GNU)
 
set(CMAKE_C_FLAGS
  "${CMAKE_C_FLAGS}"
  "-fno-common -ffunction-sections -fdata-sections"
)
 
if (CMAKE_SYSTEM_PROCESSOR STREQUAL "cortex-m0plus")
 
  set(CMAKE_C_FLAGS
    "${CMAKE_C_FLAGS}"
    "-mcpu=cortex-m0plus -mthumb"
  )
 
else ()
  message(WARNING
    "Processor not recognised in toolchain file, "
    "compiler flags not configured."
  )
endif ()
 
# fix long strings (CMake appends semicolons)
string(REGEX REPLACE ";" " " CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
 
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}" CACHE STRING "")
 
set(BUILD_SHARED_LIBS OFF)
