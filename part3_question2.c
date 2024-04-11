// Arshan Rafid (SBU ID: 115871065)

#include <stdio.h>
#include <stdlib.h>

char *same_char_remove(char str[], char str2[]){
    int l = 0;
    while ((str2[l]) != '\0'){ // need length of second string
        l++;}

    int k= 0;
    while ((str[k]) != '\0'){ // need length of first string
        k++;}

    int i = 0; int j = 0;

    if (k >= l){ //if the first string is bigger than the second
        for (i = 0; i < k; i++){ //iterate through first string length
        int instr = 0;
        for (j = 0; j < l; j++){ // iterate through second string length
            if (str2[j] == str[i]){
                instr = 1;
                break;
            }
        } 
        if (instr != 1){
            printf("%c", str[i]); 
        }
    }
    }else{ //if the second string is bigger than the first
        for (i = 0; i < l; i++){ //iterate through second string length
        int instr = 0;
        for (j = 0; j < k; j++){ // iterate through first string length
            if (str[j] == str2[i]){
                instr = 1;
                break;
            }
        } 
        if (instr != 1){
            printf("%c", str2[i]); 
        }
    }
    }

}

int main(){
    
    char str[12] = {'H', 'i', ' ', 'E', 'S', 'E', ' ', '1', '2', '4', '!', '\0'};
    char str2[5] = {'H', 'i', ' ', '!', '\0'};

    same_char_remove(str, str2);

}
