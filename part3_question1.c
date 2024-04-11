// Arshan Rafid (SBU ID: 115871065)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 10

int main(){ // program for printing a string with a decreasing # of characters on each line
    char str[size + 1];
    printf("Input: ");
    scanf("%s", &str);
    printf("Output: \n");
    for (int i = 0; i < strlen(str); i++){
        for (int j = i; j < strlen(str); j++){
            printf("%c", str[j]);
        }
        printf("\n");
    }
}
