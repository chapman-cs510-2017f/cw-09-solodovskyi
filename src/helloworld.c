#include <stdio.h>
#include "factorial.h"

/* This is a C-style comment, which has two ends for spanning multiple lines
 * The * characters without the / are for guiding the eye - they have no effect
 *
 * Above are #include statements for the "preprocessor".
 * They insert the code contained in the indicated files at the indicated line
 * so that the C "compiler" can find it and convert it into machine code
 * 
 * The brackets <> indicate the file is in a standard include path for C
 * The quotes "" indicate the file is local, relative to the current directory
 */

// This is a C++-style comment, which only has one side, //, for a single line
// They are useful for quick documentation


/* All executable C programs must have a "main" function of type "int"
 * The returned int of the C program becomes the exit code, where 0 is success
 * 
 * By convention, the main function has two arguments:
 *   int argc     : the number of command line arguments, including program name
 *   char **argv  : an array of strings, one for each command line argument
 *
 * Note: (char *) is an array of characters (i.e., a rudimentary string)
 *       (char *)* is an array of arrays of characters (array of strings)
 *       We will have much to say about these mysterious *'s soon
 *
 */
int main(int argc, char **argv) {
    // global constant character array containing a string
    static const char *string = "an amoeba";

    // argv is an array of strings of the command line arguments
    // argv[0] is the name of the program itself, and always exists
    // argv[argc-1] is the last argument provided
    char *program = argv[0];

    /* Note on printf:
     *      %s : placeholder of type string
     *      The following arguments are substituted for the placeholder.
     *      Other placeholder letters indicate different types:
     *        %d : int 
     *        %f : float
     *        etc.
     */
    printf("This is %s, running in the program %s!\n", string, program);
    /* Reminder: \n is a "newline" character inside a string */
    
    /* Call the function defined below */
    print_factorial();

    /* Programs should return 0 unless an error happens */
    return 0;
}

void print_factorial() {
    /* void : no return type
     *
     * Functions that only perform input/output (I/O) are type void
     * These functions produce "side effects" rather than return values
     * Properly, we could call them procedures, rather than functions
     *
     * Stylistically, it is a very good idea for functions to either
     * return values (like true functions) or perform side effects
     * (like procedures). Mixing behaviors causes bugs that are difficult
     * to identify and fix.
     *
     * Note that the function "factorial" used here has its type
     * specified in the "header" file "factorial.h" included above
     *
     * For this to compile properly, it must be "linked" to an "object"
     * file "factorial.o" produced by compiling a source file "factorial.c"
     * that contains a definition for "factorial" that matches the type
     * specified in "factorial.h"
     *
     * See the Makefile for more info on how the compilation process works
     *
     * Reminder on printf:
     *      %d : placeholder of type int
     *
     */
    printf("Factorial of 5 is: %d\n", factorial(5));
    printf("Factorial of 0 is: %d\n", factorial(0));
}

