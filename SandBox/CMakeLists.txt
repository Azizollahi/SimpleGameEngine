project('SandBox')

set(CPP_FILES src/main.cpp)
set(CPP_HEADER_FILES )


add_executable(SimpleGameEngine ${CPP_FILES} ${CPP_HEADER_FILES})

target_link_directories(SimpleGameEngine PUBLIC "../bin")
target_include_directories(SimpleGameEngine PUBLIC "../include")
target_link_libraries(SimpleGameEngine PUBLIC GES)