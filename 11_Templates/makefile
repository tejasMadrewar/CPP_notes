CC = g++
CCFLAGS = -std=c++11

all: ex_example_of_class_template ex_another_example_of_class_template ex_two_generic_data_types_in_a_class_defination ex_function_template_an_example

ex_example_of_class_template: ex_example_of_class_template.cpp 
	$(CC) $(CCFLAGS) ex_example_of_class_template.cpp -o ex_example_of_class_template

ex_another_example_of_class_template: ex_another_example_of_class_template.cpp 
	$(CC) $(CCFLAGS) ex_another_example_of_class_template.cpp -o ex_another_example_of_class_template

ex_two_generic_data_types_in_a_class_defination: ex_two_generic_data_types_in_a_class_defination.cpp 
	$(CC) $(CCFLAGS) ex_two_generic_data_types_in_a_class_defination.cpp -o ex_two_generic_data_types_in_a_class_defination

ex_function_template_an_example: ex_function_template_an_example.cpp 
	$(CC) $(CCFLAGS) ex_function_template_an_example.cpp -o ex_function_template_an_example

clean:
	del *.exe
