#include <stdio.h>
#include <string.h>

int main() {
    char passcode[100] = "";
    char name[32];

    printf("What is your name?: ");
    scanf("%s", name);

    if (strcmp(passcode, "4274521") == 0) {
        puts("Your passcode is correct!");
        printf("Here is flag: ");
        puts(" RiSTCTF{■■■■ [Flag NOT available] ■■■■}");
    } else {
        printf("Your passcode is %s, but this is wrong.\n", passcode);
        puts("Bye.");
    }
    return 0;
}