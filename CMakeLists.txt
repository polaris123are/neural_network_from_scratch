cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Neuron.cpp
        Neuron.h
        Layer.cpp
        Layer.h
        MLP.cpp
        MLP.h
        MeanSquareLoss.cpp
        MeanSquareLoss.h
        Value.cpp
        Value.h)
