# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g

# Target executable
TARGET = stack

# Object files
OBJ = main.o stack.o

# Default target: compile and link
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Compile main.cpp into object file
main.o: main.cpp stack.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Compile stack.cpp into object file
stack.o: stack.cpp stack.h
	$(CXX) $(CXXFLAGS) -c stack.cpp

# Clean up object files and the executable
clean:
	rm -f $(OBJ) $(TARGET)
