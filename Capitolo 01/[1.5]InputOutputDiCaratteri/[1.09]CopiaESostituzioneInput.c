#include <stdio.h>

/**
 * Author: Antonio Anghelone <anthonyvor@gmail.com>
 * 
 * Solution for Exercise 1.09, Chapter 1.
 */

#include <stdio.h>

int main(void)
{
    int c, ContatoreSpazi;
    SpaceCounter = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ') {
            if (!SpaceCounter) {
                SpaceCounter = 1;
                printf(" ");
            }
        } else {
            SpaceCounter = 0;
            putchar(c);
        }

    return 0;
}
