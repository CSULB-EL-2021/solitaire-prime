cmake_minimum_required(VERSION 3.20)
project(SolitairePrime)

set(CMAKE_CXX_STANDARD 14)

add_executable(SolitairePrime Card.cpp Card.h Deck.cpp Deck.h solitairePrime.cpp)
