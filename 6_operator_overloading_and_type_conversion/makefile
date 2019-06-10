CC = g++
CCFLAGS = -s

all: ex_overloading_unary_operator ex_overloading_unary_operator_friend ex_overloading_binary_operator ex_overloading_using_friends ex_manipulation_of_string ex_type_conversion_1_basic_to_class ex_type_conversion_2_class_to_basic ex_data_conversion

ex_overloading_unary_operator: ex_overloading_unary_operator.cpp
	$(CC) $(CCFLAGS) ex_overloading_unary_operator.cpp -o ex_overloading_unary_operator

ex_overloading_unary_operator_friend: ex_overloading_unary_operator_friend.cpp
	$(CC) $(CCFLAGS) ex_overloading_unary_operator_friend.cpp -o ex_overloading_unary_operator_friend

ex_overloading_binary_operator: ex_overloading_binary_operator.cpp
	$(CC) $(CCFLAGS) ex_overloading_binary_operator.cpp -o ex_overloading_binary_operator

ex_overloading_using_friends: ex_overloading_using_friends.cpp
	$(CC) $(CCFLAGS) ex_overloading_using_friends.cpp -o ex_overloading_using_friends

ex_manipulation_of_string: ex_manipulation_of_string.cpp
	$(CC) $(CCFLAGS) ex_manipulation_of_string.cpp -o ex_manipulation_of_string

ex_type_conversion_1_basic_to_class: ex_type_conversion_1_basic_to_class.cpp
	$(CC) $(CCFLAGS) ex_type_conversion_1_basic_to_class.cpp -o ex_type_conversion_1_basic_to_class

ex_type_conversion_2_class_to_basic: ex_type_conversion_2_class_to_basic.cpp
	$(CC) $(CCFLAGS) ex_type_conversion_2_class_to_basic.cpp -o ex_type_conversion_2_class_to_basic

ex_data_conversion: ex_data_conversion.cpp
	$(CC) $(CCFLAGS) ex_data_conversion.cpp -o ex_data_conversion

clean:
	del *.exe
