# Makefile for a C++ program with dependencies

# Compiler
CXX := g++

# Compiler flags
CXXFLAGS := -std=c++11 -Wall -g

# Source files
SRCS := main.cpp SinglyLinkedLists.cpp Node.cpp Queue.cpp Stack.cpp

# Object files
OBJS := $(SRCS:.cpp=.o)

# Target executable
TARGET := main

# Build rule
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Rule to build object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)

