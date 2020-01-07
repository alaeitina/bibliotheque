cmake_minimum_required(VERSION 3.14)
project(bibliotheque)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(bibliotheque
        main.cpp
        Bibliotheque.cpp
        Bibliotheque.h
        Livre.cpp
        Livre.h
        BandeDessinee.cpp
        BandeDessinee.h RecueilDePoesie.cpp RecueilDePoesie.h)
