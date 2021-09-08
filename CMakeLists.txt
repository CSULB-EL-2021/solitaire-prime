cmake_minimum_required(VERSION 3.20)
project(SolitairePrime)

set(CMAKE_CXX_STANDARD 14)

add_executable(SolitairePrime main.cpp Card.cpp Card.hpp Deck.cpp Deck.hpp Game.cpp Game.hpp)
