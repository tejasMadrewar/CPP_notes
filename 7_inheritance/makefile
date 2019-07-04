CC = g++
CCFLAGS = -s

all: ex_inheritance  ex_single_inheritance ex_single_inheritance_private ex_multilevel_inheritance

ex_inheritance: ex_inheritance.cpp
	$(CC) $(CCFLAGS) ex_inheritance.cpp -o ex_inheritance

ex_single_inheritance: ex_single_inheritance.cpp
	$(CC) $(CCFLAGS) ex_single_inheritance.cpp -o ex_single_inheritance

ex_single_inheritance_private: ex_single_inheritance_private.cpp
	$(CC) $(CCFLAGS) ex_single_inheritance_private.cpp -o ex_single_inheritance_private

ex_multilevel_inheritance: ex_multilevel_inheritance.cpp
	$(CC) $(CCFLAGS) ex_multilevel_inheritance.cpp -o ex_multilevel_inheritance

clean:
	del *.exe
