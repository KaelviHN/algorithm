cmake_minimum_required(VERSION 3.28)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

add_executable(algorithm
        src/hashTable/ts/TS1.cpp
        src/hashTable/ts/TS2.cpp
        src/hashTable/rn/RN383.cpp
        src/hashTable/ts/TS3.cpp
        src/hashTable/ts/TS4.cpp
        src/string/reverseString/RS344.cpp
        src/string/reverseString/RS541.cpp
        src/string/reverseString/RS151.cpp
        src/string/os/OS28.cpp
)
