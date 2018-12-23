#include <stdio.h>

main()
{
    int c, tabs, blanks, newlines;
    tabs = 0;
    blanks = 0;
    newlines = 0;

    while ((c = getchar()) != EOF)
        if (c == ' ')
            blanks++;
        else if (c == '\n')
            newlines++;
        else if (c == '\t'){
            tabs++;
        }

    printf("tabs=%d, blanks=%d, newlines=%d\n", tabs, blanks, newlines);
}