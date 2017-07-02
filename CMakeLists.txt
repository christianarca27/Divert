cmake_minimum_required(VERSION 3.7)
project(DivertProject)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Interactive.cpp Interactive.h InteractiveCharacter.cpp InteractiveCharacter.h Vendor.cpp Vendor.h Blacksmith.cpp Blacksmith.h Magician.cpp Magician.h QuestAgent.cpp QuestAgent.h InteractiveItems.cpp InteractiveItems.h Dice.cpp Dice.h)
add_executable(DivertProject ${SOURCE_FILES})