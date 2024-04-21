#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;
    int sum;
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;

    // Start adding digits from the rightmost digit
    while (i >= 0 || j >= 0 || carry) {
        // Calculate the sum of digits
        sum = carry;
        if (i >= 0) {
            sum += n1[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += n2[j] - '0';
            j--;
        }
        // Check if there is overflow
        if (k >= size_r - 1) {
            return 0; // Buffer overflow, return 0
        }
        // Store the result digit in the result buffer
        r[k] = (sum % 10) + '0';
        k++;
        carry = sum / 10;
    }
    
    // Null terminate the result string
    r[k] = '\0';

    // Reverse the result string
    int left = 0;
    int right = k - 1;
    while (left < right) {
        char temp = r[left];
        r[left] = r[right];
        r[right] = temp;
        left++;
        right--;
    }

    return r;
}
