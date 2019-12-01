CC = g++
CCFLAGS = -std=c++11

all: ex_use_of_BOOL_type_data ex_use_of_keyword_mutable ex_using_namespace_scope_with_nesting ex_illustrating_the_using_keyword ex_using_function_in_namespace_scope ex_using_classes_in_namespace_scope

ex_use_of_BOOL_type_data: ex_use_of_BOOL_type_data.cpp 
	$(CC) $(CCFLAGS) ex_use_of_BOOL_type_data.cpp -o ex_use_of_BOOL_type_data

ex_use_of_keyword_mutable: ex_use_of_keyword_mutable.cpp 
	$(CC) $(CCFLAGS) ex_use_of_keyword_mutable.cpp -o ex_use_of_keyword_mutable

ex_using_namespace_scope_with_nesting: ex_using_namespace_scope_with_nesting.cpp 
	$(CC) $(CCFLAGS) ex_using_namespace_scope_with_nesting.cpp -o ex_using_namespace_scope_with_nesting

ex_illustrating_the_using_keyword: ex_illustrating_the_using_keyword.cpp 
	$(CC) $(CCFLAGS) ex_illustrating_the_using_keyword.cpp -o ex_illustrating_the_using_keyword

ex_using_function_in_namespace_scope: ex_using_function_in_namespace_scope.cpp 
	$(CC) $(CCFLAGS) ex_using_function_in_namespace_scope.cpp -o ex_using_function_in_namespace_scope

ex_using_classes_in_namespace_scope: ex_using_classes_in_namespace_scope.cpp 
	$(CC) $(CCFLAGS) ex_using_classes_in_namespace_scope.cpp -o ex_using_classes_in_namespace_scope

clean:
	del *.exe
