project('GES')

include_directories("../include/GES")
include_directories("vendor/spdlog/include")

set(GES_CPP_FILES src/Log.cpp src/Application.cpp)
set(GES_CPP_HEADER_FILES ../include/GES/Log.h ../include/GES/GES.h ../include/GES/Application.h ../include/GES/EntryPoint.hpp)

#set(GES_CPP_FILES src/Application.cpp)
#set(GES_CPP_HEADER_FILES ../include/GES/Simple.h ../include/GES/Application.h ../include/GES/EntryPoint.hpp)


add_library(GES SHARED ${GES_CPP_FILES} ${GES_CPP_HEADER_FILES})

add_custom_command(TARGET GES POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy
		"${CMAKE_CURRENT_BINARY_DIR}/libGES.so" "../../bin/libGES.so")
