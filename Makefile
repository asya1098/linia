# компилятор - g++, можете заменить его на любой другой, например clang++
СXX = g++ 
# Флаги компиляции: включены предупреждения и откладочная информация 
CXXFLAGS = -Wall -g
SRCS = linia.cpp
TARGET = linia

all:
	$(CXX) $(SRCS) -o $(TARGET)