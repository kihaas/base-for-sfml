cmake_minimum_required(VERSION 3.16)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled1 scr/main.cpp)



# Ищем SFML
# find_package(SFML 2.6 COMPONENTS graphics.h window system REQUIRED)

# Создаём исполняемый файл
# add_executable(MySFMLProject main.cpp)

# Линкуем SFML
target_link_libraries(untitled1 sfml-graphics sfml-window sfml-system sfml-audio)
