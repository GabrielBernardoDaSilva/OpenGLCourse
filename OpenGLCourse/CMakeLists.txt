cmake_minimum_required(VERSION 3.0.0)

project(OpenGLCourse)


set(OpenGL_GL_PREFERENCE LEGACY)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)

#set debug 
set(CMAKE_BUILD_TYPE Debug)

find_package(OpenGL REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_search_module(GLFW REQUIRED glfw3)
find_package(GLEW REQUIRED)

 
include_directories(${GLM_INCLUDE_DIRS})
include_directories(${OPENGL_INCLUDE_DIR})
include_directories(${GLFW_INCLUDE_DIRS})
include_directories(${GLEW_INCLUDE_DIRS})

file(GLOB SRCS src/*.cpp)

include_directories(./includes)
add_executable(${PROJECT_NAME} ${SRCS})
target_link_libraries(${PROJECT_NAME} ${GLFW_LIBRARIES} ${GLEW_LIBRARIES} ${GLM_LIBRARIES} ${OPENGL_LIBRARIES})


file(COPY "${PROJECT_SOURCE_DIR}/Shaders" DESTINATION "${PROJECT_BINARY_DIR}")


