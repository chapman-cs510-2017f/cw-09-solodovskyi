# Makefile for main src

# Default target: build program helloworld
all: helloworld

# This seeks a target below named "helloworld"

# The helloworld target specifies only the object file factorial.o
helloworld: factorial.o
# Since make finds the file "helloworld.c", it is smart enough to know
# that it should use factorial.o to build a program called "helloworld"

# The Makefile is smart enough to know that it must build factorial.o
# first. This is known as a "dependence" for the compilation.
# To do this, it looks for the file "factorial.c" then compiles
# it with the command "gcc -c -o factorial.o factorial.c"
# The -c tells the GNU C Compiler (gcc) to compile the file to an object
# file only, without linking it into an executable binary file.
# The "-o factorial.o" tells gcc to output the filename "factorial.o"
# The last item "factorial.c" is the file for gcc to compile.
# The purpose of the object file "factorial.o" is to store compiled 
# symbols (e.g., functions, constants) so that they may be used in other
# programs. Think of this like creating a module in python so that you can
# import the module later to use in another program. In C, the object file is 
# precompiled and "linked" to become part of another binary program.
#
# After obtaining the object file "factorial.o", the make command then runs
# the compilation command: "gcc -o helloworld factorial.o helloworld.c
# This compiles the file "helloworld.c" and links it with the object
# file "factorial.o" to output the binary executable "helloworld".

# For the optional clean target, remove all object files for convenience
clean:
	rm -f *.o 
