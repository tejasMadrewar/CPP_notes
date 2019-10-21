CC = g++
CCFLAGS = -std=c++11

all: ex_using_vector ex_using_list ex_using_map ex_use_of_function_objects_in_algorithm

ex_using_vector: ex_using_vector.cpp 
	$(CC) $(CCFLAGS) ex_using_vector.cpp -o ex_using_vector

ex_using_list: ex_using_list.cpp 
	$(CC) $(CCFLAGS) ex_using_list.cpp -o ex_using_list

ex_using_map: ex_using_map.cpp 
	$(CC) $(CCFLAGS) ex_using_map.cpp -o ex_using_map

ex_use_of_function_objects_in_algorithm: ex_use_of_function_objects_in_algorithm.cpp 
	$(CC) $(CCFLAGS) ex_use_of_function_objects_in_algorithm.cpp -o ex_use_of_function_objects_in_algorithm

clean:
	del *.exe
