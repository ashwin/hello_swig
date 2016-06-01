cmake_minimum_required(VERSION 2.8)

find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

find_package(PythonLibs)
include_directories(
    ${PYTHON_INCLUDE_PATH}
    ${CMAKE_CURRENT_SOURCE_DIR}
    )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
SET(CMAKE_SWIG_FLAGS "")

SET_SOURCE_FILES_PROPERTIES(phonebook.i PROPERTIES CPLUSPLUS ON)
SET_SOURCE_FILES_PROPERTIES(phonebook.i PROPERTIES SWIG_FLAGS "-includeall")

SWIG_ADD_MODULE(phonebook python phonebook.i phonebook.cpp)
SWIG_LINK_LIBRARIES(phonebook ${PYTHON_LIBRARIES})
