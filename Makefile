CPP				= g++
MAIN			= src/main.cpp
FILES			= src/body.cpp src/sandbox.cpp src/universe.cpp
OUTPUT			= main
INCLUDES		= -I"engine/"
LIBS			=
DEPENDENCIES	=

all $(MAIN):
	$(CPP) -Wall -std=c++11 $(MAIN) $(FILES) -o $(OUTPUT) $(INCLUDES) $(LIBS) $(DEPENDENCIES)
