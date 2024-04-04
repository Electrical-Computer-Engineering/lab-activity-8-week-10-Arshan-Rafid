// Arshan Rafid (SBU ID: 115871065)

#include <stdio.h>
#include <stdlib.h>

int my_isalpha(char letter){
    if (letter >= 'A' && letter <= 'Z' || letter >='a' && letter <= 'z'){
        return 1;
    }
    else{
        return 0;
    }
}

int my_isdigit(char letter){
    if (letter >= '0' && letter <= '9'){
        return 1;
    }
    else{
        return 0;
    }
}

int my_is_upper(char letter){
    if (letter >= 'A' && letter <= 'Z'){
        return 1;
    }
    else{
        return 0;
    }
}

int my_to_upper(char letter){
    if (letter >= 'a' && letter <= 'z'){
        return letter -= 32;
    }
    else{
        return letter;
    }
}

int my_to_lower(char letter){
    if (letter >= 'A' && letter <= 'Z'){
        return letter += 32;
    }
    else{
        return letter;
    }
}

int main(){
    char letter = 'A'; // the parameter
    if (my_isalpha(letter)){
        printf("letter\n");
    }if (my_isdigit(letter)){
        printf("number\n");
    }
    if (my_is_upper(letter)){
        printf("upper-case\n");
    }
    if (my_to_upper(letter)){
        printf("%c\n",my_to_upper(letter));
    }
    if (my_to_lower(letter)){
        printf("%c\n",my_to_lower(letter));
    }

    if (my_isalpha(letter)){ // run it twice, for the lab assignment
        printf("letter\n");
    }if (my_isdigit(letter)){
        printf("number\n");
    }
    if (my_is_upper(letter)){
        printf("upper-case\n");
    }
    if (my_to_upper(letter)){
        printf("%c\n",my_to_upper(letter));
    }
    if (my_to_lower(letter)){
        printf("%c\n",my_to_lower(letter));
    } 

    return 0;
}
