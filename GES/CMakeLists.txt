project('GES')

include_directories("../include/GES")

set(CPP_FILES src/Test.cpp)
set(CPP_HEADER_FILES ../include/GES/Test.h)

add_library(GES SHARED ${CPP_FILES} ${CPP_HEADER_FILES})

add_custom_command(TARGET GES POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy
		"${CMAKE_CURRENT_BINARY_DIR}/libGES.so" "../../bin/libGES.so")
