CC = g++
CCFLAGS = -s

all: ex_inheritance  ex_single_inheritance ex_single_inheritance_private ex_multilevel_inheritance ex_multiple_inheritance ex_ambiguity_resolution ex_hybrid_inheritance ex_virtual_base_class ex_derived_class_constructor

ex_inheritance: ex_inheritance.cpp
	$(CC) $(CCFLAGS) ex_inheritance.cpp -o ex_inheritance

ex_single_inheritance: ex_single_inheritance.cpp
	$(CC) $(CCFLAGS) ex_single_inheritance.cpp -o ex_single_inheritance

ex_single_inheritance_private: ex_single_inheritance_private.cpp
	$(CC) $(CCFLAGS) ex_single_inheritance_private.cpp -o ex_single_inheritance_private

ex_multilevel_inheritance: ex_multilevel_inheritance.cpp
	$(CC) $(CCFLAGS) ex_multilevel_inheritance.cpp -o ex_multilevel_inheritance

ex_multiple_inheritance: ex_multiple_inheritance.cpp
	$(CC) $(CCFLAGS) ex_multiple_inheritance.cpp -o ex_multiple_inheritance

ex_ambiguity_resolution: ex_ambiguity_resolution.cpp
	$(CC) $(CCFLAGS) ex_ambiguity_resolution.cpp -o ex_ambiguity_resolution

ex_hybrid_inheritance: ex_hybrid_inheritance.cpp
	$(CC) $(CCFLAGS) ex_hybrid_inheritance.cpp -o ex_hybrid_inheritance

ex_virtual_base_class: ex_virtual_base_class.cpp
	$(CC) $(CCFLAGS) ex_virtual_base_class.cpp -o ex_virtual_base_class

ex_derived_class_constructor: ex_derived_class_constructor.cpp
	$(CC) $(CCFLAGS) ex_derived_class_constructor.cpp -o ex_derived_class_constructor

clean:
	del *.exe
