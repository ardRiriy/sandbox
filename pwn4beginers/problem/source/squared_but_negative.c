#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("I need a number that is negative when squared!\n");
    printf("Enter such a number: ");

    int n;
    scanf("%d", &n);

    int squared = n * n;

    if (squared < 0) {
        printf("Your squared num is %d.\n\n", squared);
        printf("Wow! I need it, thank you!\n");
        printf("RiSTCTF{■■■■ [Flag is not available] ■■■■}\n");
    } else {
        printf("Your squared num is %d, but it's just positive number...\n",
               squared);
    }
    return 0;
}