project('SandBox')

set(CPP_FILES src/SandBoxApp.cpp)
set(CPP_HEADER_FILES )


add_executable(SimpleGameEngine ${CPP_FILES} ${CPP_HEADER_FILES})

target_link_directories(SimpleGameEngine PUBLIC "../bin")
target_include_directories(SimpleGameEngine PUBLIC "../include")
target_link_libraries(SimpleGameEngine PUBLIC GES)

add_custom_command(TARGET SimpleGameEngine POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy
		"${CMAKE_CURRENT_BINARY_DIR}/SimpleGameEngine" "../../bin/SimpleGameEngine")