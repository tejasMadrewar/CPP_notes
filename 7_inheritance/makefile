CC = g++
CCFLAGS = -s

all: ex_inheritance  ex_single_inheritance ex_single_inheritance_private

ex_inheritance: ex_inheritance.cpp
	$(CC) $(CCFLAGS) ex_inheritance.cpp -o ex_inheritance

ex_single_inheritance: ex_single_inheritance.cpp
	$(CC) $(CCFLAGS) ex_single_inheritance.cpp -o ex_single_inheritance

ex_single_inheritance_private: ex_single_inheritance_private.cpp
	$(CC) $(CCFLAGS) ex_single_inheritance_private.cpp -o ex_single_inheritance_private

clean:
	del *.exe
