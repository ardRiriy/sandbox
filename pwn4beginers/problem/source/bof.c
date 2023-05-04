#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char passcode[100] = "";
    char name[32];

    printf("What is your name?: ");
    fflush(stdout);
    scanf("%s", name);

    if (strcmp(passcode, "4274521") == 0) {
        puts("Your passcode is correct!");
        printf("Here is flag: ");
        fflush(stdout);

        FILE* file = fopen("flag.txt", "r");
        char ch;
        if (file == NULL) {
            printf("エラー: ファイル 'flag.txt' が開けませんでした。\n");
            exit(1);
        }

        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }

        fclose(file);
    } else {
        printf("Your passcode is %s, but this is wrong.\n", passcode);
        fflush(stdout);
        puts("Bye.");
    }
    return 0;
}