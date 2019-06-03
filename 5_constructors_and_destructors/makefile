CC = g++
CCFLAGS = -s

all: ex_constructor ex_parameterized_constructors ex_overloaded_constructors ex_dynamic_init_of_constructor

ex_constructor: ex_constructor.cpp
	$(CC) $(CCFLAGS) ex_constructor.cpp -o ex_constructor

ex_parameterized_constructors: ex_parameterized_constructors.cpp
	$(CC) $(CCFLAGS) ex_parameterized_constructors.cpp -o ex_parameterized_constructors

ex_overloaded_constructors: ex_overloaded_constructors.cpp
	$(CC) $(CCFLAGS) ex_overloaded_constructors.cpp -o ex_overloaded_constructors

ex_dynamic_init_of_constructor: ex_dynamic_init_of_constructor.cpp
	$(CC) $(CCFLAGS) ex_dynamic_init_of_constructor.cpp -o ex_dynamic_init_of_constructor

clean:
	del *.exe
