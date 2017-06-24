cmake_minimum_required(VERSION 3.7)
project(DivertProject)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp GameCharacter.cpp GameCharacter.h Race.cpp Race.h EnemyCharacter.cpp EnemyCharacter.h PlayableCharacter.cpp PlayableCharacter.h)
add_executable(DivertProject ${SOURCE_FILES})