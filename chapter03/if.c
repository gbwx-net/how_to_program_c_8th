/* Simple addition program */
#include <stdio.h>
#include <stdlib.h>

/* function start */
int main (void)
{
    int grade;

    puts( "Input you grade: " );
    scanf( "%d", &grade );

    if( grade >= 60 )
    {
        puts( "Passed" );
    } /* end if */
    else
    {
        puts( "Failed" );
    } /* end else */

    return EXIT_SUCCESS; /* C90 compliance */
} 
/* function main end */