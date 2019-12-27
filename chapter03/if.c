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

    puts( "Conditional Operators :" );

    puts( grade >= 60 ? "Passed" : "Failed" ); /* either should work but the ide errors this one out */
    grade >= 60 ? puts( "Passed" ) : puts( "Failed" );

    return EXIT_SUCCESS; /* C90 compliance */
} 
/* function main end */