# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Data_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Data_autogen.dir\\ParseCache.txt"
  "Data_autogen"
  )
endif()
