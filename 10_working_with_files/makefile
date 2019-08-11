CC = g++
CCFLAGS = -s

all: ex_working_with_single_file ex_working_with_multiple_files

ex_working_with_single_file: ex_working_with_single_file.cpp
	$(CC) $(CCFLAGS) ex_working_with_single_file.cpp -o ex_working_with_single_file

ex_working_with_multiple_files: ex_working_with_multiple_files.cpp
	$(CC) $(CCFLAGS) ex_working_with_multiple_files.cpp -o ex_working_with_multiple_files

clean:
	del *.exe
