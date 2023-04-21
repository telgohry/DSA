cmake_minimum_required(VERSION 3.25)
project(clion C)

set(CMAKE_C_STANDARD 11)

add_executable(clion main.c DS/Stack/ds.c DS/Stack/ds.h DS/Queue/queue.c DS/Queue/queue.h DS/Linked_List/linkedlist.c DS/Linked_List/linkedlist.h ALGORITHMS/algorithms.c ALGORITHMS/algorithms.h)
