CC = g++
CCFLAGS = -std=c++11
CPPFILES = $(wildcard *.cpp)
EXECUTABLES = $(CPPFILES:.cpp=.exe)

all : $(EXECUTABLES)

%.exe:%.cpp
	$(CC) $(CCFLAGS) $< -o $@

clean:
	del *.exe
