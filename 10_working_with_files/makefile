CC = g++
CCFLAGS = -s

all: ex_working_with_single_file ex_working_with_multiple_files ex_io_operations_on_characters ex_io_operation_on_binary_files

ex_working_with_single_file: ex_working_with_single_file.cpp
	$(CC) $(CCFLAGS) ex_working_with_single_file.cpp -o ex_working_with_single_file

ex_working_with_multiple_files: ex_working_with_multiple_files.cpp
	$(CC) $(CCFLAGS) ex_working_with_multiple_files.cpp -o ex_working_with_multiple_files

ex_io_operations_on_characters: ex_io_operations_on_characters.cpp
	$(CC) $(CCFLAGS) ex_io_operations_on_characters.cpp -o ex_io_operations_on_characters

ex_io_operation_on_binary_files: ex_io_operation_on_binary_files.cpp
	$(CC) $(CCFLAGS) ex_io_operation_on_binary_files.cpp -o ex_io_operation_on_binary_files

clean:
	del *.exe
