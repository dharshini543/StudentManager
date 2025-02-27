cmake_minimum_required(VERSION 3.16)

project(SM LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(SM main.cpp
    StudentManager.h StudentManager.cpp
    Student.h Student.cpp
    FileOperation.h FileOperation.cpp
    CsvFileOperation.h CsvFileOperation.cpp
    XmlFileOperation.h XmlFileOperation.cpp
    JsonFileOperation.h JsonFileOperation.cpp)

include(GNUInstallDirs)
install(TARGETS SM
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
