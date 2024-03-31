#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void) {
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            printf("%d\t", i * j); // Print each multiplication result with a tab separator
        }
        printf("\n");
    }
}