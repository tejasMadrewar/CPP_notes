CC = g++
CCFLAGS = -std=c++11

all: ex_try_block_throwing_exception ex_invoking_function_that_generate_excpetion ex_multiple_catch_statement ex_catching_all_exceptions

ex_try_block_throwing_exception: ex_try_block_throwing_exception.cpp 
	$(CC) $(CCFLAGS) ex_try_block_throwing_exception.cpp -o ex_try_block_throwing_exception

ex_invoking_function_that_generate_excpetion: ex_invoking_function_that_generate_excpetion.cpp 
	$(CC) $(CCFLAGS) ex_invoking_function_that_generate_excpetion.cpp -o ex_invoking_function_that_generate_excpetion

ex_multiple_catch_statement: ex_multiple_catch_statement.cpp 
	$(CC) $(CCFLAGS) ex_multiple_catch_statement.cpp -o ex_multiple_catch_statement

ex_catching_all_exceptions: ex_catching_all_exceptions.cpp 
	$(CC) $(CCFLAGS) ex_catching_all_exceptions.cpp -o ex_catching_all_exceptions

clean:
	del *.exe
