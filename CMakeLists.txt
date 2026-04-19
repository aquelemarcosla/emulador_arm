cmake_minimum_required(VERSION 4.2)
project(emulador_arm C)

set(CMAKE_C_STANDARD 11)

add_executable(emulador_arm
        main.c
        cpu.c
        memory.c
        decode.c
        execute.c
)
