CC = g++
CCFLAGS = -s

all: ex_overloading_unary_operator ex_overloading_unary_operator_friend ex_overloading_binary_operator ex_overloading_using_friends

ex_overloading_unary_operator: ex_overloading_unary_operator.cpp
	$(CC) $(CCFLAGS) ex_overloading_unary_operator.cpp -o ex_overloading_unary_operator

ex_overloading_unary_operator_friend: ex_overloading_unary_operator_friend.cpp
	$(CC) $(CCFLAGS) ex_overloading_unary_operator_friend.cpp -o ex_overloading_unary_operator_friend

ex_overloading_binary_operator: ex_overloading_binary_operator.cpp
	$(CC) $(CCFLAGS) ex_overloading_binary_operator.cpp -o ex_overloading_binary_operator

ex_overloading_using_friends: ex_overloading_using_friends.cpp
	$(CC) $(CCFLAGS) ex_overloading_using_friends.cpp -o ex_overloading_using_friends

clean:
	del *.exe
