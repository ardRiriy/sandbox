#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char command[100];
    char path[50];

    printf("Input any path: ");
    scanf("%[^\n]", path);

    strcat(command, "ls ");
    strcat(command, path);

    system(command);

    return 0;
}