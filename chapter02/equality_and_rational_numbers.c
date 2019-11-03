/* Using if statements, relational operators, and equality operators. */

#include <stdio.h>
#include <stdlib.h>

/* function main start */
int main ( void )
{
    int num1, num2; /* define number vars */

    printf( "Enter two integers (int1 int2),\n" ); /* prompt the user for input */
    printf( "and I will tell you the relationships they satisfy: " );
    
    scanf( "%d %d", &num1, &num2 ); /* assign input to vars */

    /* logic checks */
    if ( num1 == num2 )
    {
        printf( "%d is equal to %d\n", num1, num2 );
    }

    if ( num1 != num2 )
    {
        printf( "%d is not equal to %d\n", num1, num2 );
    }

    if ( num1 < num2 )
    {
        printf( "%d is less than %d\n", num1, num2 );
    }

    if ( num1 > num2 )
    {
        printf( "%d greater than %d\n", num1, num2 );
    }

    if ( num1 <= num2 )
    {
        printf( "%d is less than or equal to %d\n", num1, num2 );
    }

    if ( num1 >= num2 )
    {
        printf( "%d is greater than or equal to %d\n", num1, num2 );
    }

    return EXIT_SUCCESS; /* C90 compliance */
} 
/* function main end */