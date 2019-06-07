CPP			= g++
MAIN			= main.cpp
FILES			= body.cpp
OUTPUT			= main
INCLUDES		= -I"engine/"
LIBS			=
DEPENDENCIES		=

all $(MAIN):
	$(CPP) -Wall $(MAIN) $(FILES) -o $(OUTPUT) $(INCLUDES) $(LIBS) $(DEPENDENCIES)
