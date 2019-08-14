CC = g++
CCFLAGS = -s

all: ex_working_with_single_file ex_working_with_multiple_files ex_io_operations_on_characters ex_io_operation_on_binary_files ex_reading_and_writing_class_objects ex_updating_a_file_random_access ex_commandline_arguments

ex_working_with_single_file: ex_working_with_single_file.cpp
	$(CC) $(CCFLAGS) ex_working_with_single_file.cpp -o ex_working_with_single_file

ex_working_with_multiple_files: ex_working_with_multiple_files.cpp
	$(CC) $(CCFLAGS) ex_working_with_multiple_files.cpp -o ex_working_with_multiple_files

ex_io_operations_on_characters: ex_io_operations_on_characters.cpp
	$(CC) $(CCFLAGS) ex_io_operations_on_characters.cpp -o ex_io_operations_on_characters

ex_io_operation_on_binary_files: ex_io_operation_on_binary_files.cpp
	$(CC) $(CCFLAGS) ex_io_operation_on_binary_files.cpp -o ex_io_operation_on_binary_files

ex_reading_and_writing_class_objects: ex_reading_and_writing_class_objects.cpp
	$(CC) $(CCFLAGS) ex_reading_and_writing_class_objects.cpp -o ex_reading_and_writing_class_objects

ex_updating_a_file_random_access: ex_updating_a_file_random_access.cpp
	$(CC) $(CCFLAGS) ex_updating_a_file_random_access.cpp -o ex_updating_a_file_random_access

ex_commandline_arguments: ex_commandline_arguments.cpp
	$(CC) $(CCFLAGS) ex_commandline_arguments.cpp -o ex_commandline_arguments

clean:
	del *.exe
