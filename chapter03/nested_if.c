/* Simple addition program */
#include <stdio.h>
#include <stdlib.h>

/* function start */
int main (void)
{
    int grade;

    puts( "Input you grade: " );
    scanf( "%d", &grade );

    if( grade >= 90 )
    {
        puts( "A" );
    } /* end if */
    else
    {
        if( grade >= 80 )
        {
            puts( "B" );
        } /* if end */
        else
        {
            if( grade >= 70 )
            {
                puts( "C" );
            } /* if end */
            else
            {
                if( grade >= 60 )
                {
                    puts( "D" );
                } /* if end */
                else
                {
                    puts( "F" );
                } /* else end */
            } /* else end */    
        } /* else end */
    } /* else end */

    return EXIT_SUCCESS; /* C90 compliance */
} 
/* function main end */