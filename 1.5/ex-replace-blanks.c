#include <stdio.h>

/* copy input to output, truncating blanks */
main()
{
    int c, last;
    
    while ((c = getchar()) != EOF) {
        if (last != ' ' || c != ' ') {
            putchar(c);
        }
        last = c;
    }
}