#include <stdio.h>
#include <stdlib.h>
int main() {
    system("cls");
    printf("\033[104mThis is red\n");
    printf("\033[0m");
    printf("\033[93mThis is red\n");
    printf("\033[103mThis is red\n");
    printf("\033[0m");
    printf("\033[105mThis is green\n");
    printf("\033[1mThis is yellow\n");
    printf("\033[0m");   // Reset color
    printf("Formatting reset to default\n");
    return 0;
}