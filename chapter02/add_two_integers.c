/* Simple addition program */
#include <stdio.h>
#include <stdlib.h>

/* function main start */
int main( void )
{
    int integer1; /* first number to be entered by the user */
    int integer2; /* second number to be entered by the user */
    int sum; /* variable to store the addition result */

    printf( "Enter first integer\n" ); /* prompt for integer input */
    scanf( "%d", &integer1 ); /* read an integer from the terminal */

    printf( "Enter second integer\n" ); /* prompt for integer input */
    scanf( "%d", &integer2 ); /* read an integer from the terminal */
    
    sum = integer1 + integer2; /* addition process */

    printf( "Sum is %d\n", sum); /* print sum */

    return EXIT_SUCCESS; /* C90 compliance */
}
/* function main end */