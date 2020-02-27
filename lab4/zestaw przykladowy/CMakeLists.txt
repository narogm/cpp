cmake_minimum_required(VERSION 3.13)
project(zestaw_przykladowy)

set(CMAKE_CXX_STANDARD 14)

add_executable(zestaw_przykladowy main.cpp Osoba.cpp Osoba.h Pojazd.cpp Pojazd.h Rower.cpp Rower.h PojazdSilnikowy.cpp PojazdSilnikowy.h PojazdOsobowy.cpp PojazdOsobowy.h)