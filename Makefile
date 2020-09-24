CPP				= g++
MAIN			= src/main.cpp
FILES			= src/sandbox.cpp src/universe.cpp
OUTPUT			= build/astrosim
INCLUDES		= -I"engine/"
LIBS			=
DEPENDENCIES	=

all $(MAIN):
	$(CPP) -Wall -std=c++11 $(MAIN) $(FILES) -o $(OUTPUT) $(INCLUDES) $(LIBS) $(DEPENDENCIES)
	./$(OUTPUT)