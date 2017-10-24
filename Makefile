# This is a Makefile
# It automates build tasks for C, C++, and other languages easily

# Tell make that the targets test and clean are abstract (not actual files)
.PHONY : test clean

# Default target: this is executed if nothing else is specified
# As written, "$(MAKE) -C" descends into subdirectories src and test
# and executes "make" in those directories, respectively
all:
	$(MAKE) -C src/
	$(MAKE) -C test/

# Side note: the indent characters must be TABS in Makefiles, so you
# should be sure to edit the files in an editor that preserves the
# tab characters properly

# test target: this is executed upon a "make test"
test: 
	$(MAKE) -C test/ test

# clean target: this is executed upon a "make clean"
clean:
	$(MAKE) -C src/ clean
	$(MAKE) -C test/ clean
