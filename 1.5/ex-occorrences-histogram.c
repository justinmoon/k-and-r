#include <stdio.h>

#define IN 1;
#define OUT 0;

/* count digits, whitespace, others*/
main()
{
    // declare
    int i, c, current_length;
    int word_lengths[10];

    // initialize
    for (i = 0; i < 10; ++i) {
        word_lengths[i] = 0;
    }
    current_length = 0;

    // count
    while (( c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            word_lengths[current_length] = word_lengths[current_length] + 1;
            current_length = 0;
        } else {
            ++current_length;
        }
    }
    
    // display

    // horizontal
    printf("Horizontal\n\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < word_lengths[i]; j++) {
            printf("*");
        }
        printf("\n\n");
    }
    
    // vertical
    printf("Vertical\n\n");

    int max_occurrences = 0;
    for (i = 0; i < 10; i++) {
        if (word_lengths[i] > max_occurrences) {
            max_occurrences = word_lengths[i];
        }
    }

    for (i = max_occurrences; i > 0; i--) {
        for (int j = 0; j < 10; j++) {
            if (word_lengths[j] >= i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (i = 0; i < 10; i ++) {
        printf("%d", i);
    }
    printf("\n");
}