cmake_minimum_required(VERSION 3.7)
project(DivertProject)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp BuyableItems.cpp BuyableItems.h Weapon.cpp Weapon.h Armor.cpp Armor.h Potion.cpp Potion.h RangedWeapon.cpp RangedWeapon.h MeleeWeapon.cpp MeleeWeapon.h)
add_executable(DivertProject ${SOURCE_FILES})