#include <stdio.h>

int main() {
    char whatToSay[] = "\0";
    printf("Say:");
    scanf("%s",&whatToSay);
    printf(whatToSay);
    return 0;
}
