// Arshan Rafid (SBU ID: 115871065)

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int my_vowel(char letter){ // change this to vowels not uppercase
    if (letter == 'A' || letter == 'a' || letter == 'E' || letter == 'e' || letter == 'I' || letter == 'i' || letter == 'O' || letter == 'o' || letter == 'U' || letter == 'u'){
        return 1;
    }
    else{
        return 0;
    }
}

//concatenate function

char *my_strcat(char str[], char str2[]){
    int j = 0;

    while ((str2[j]) != '\0'){ // need length of second string
        j++;
    }

    int k= 0;
    while ((str[k]) != '\0'){ // need length of second string
        k++;
    }

    for (int i = 0; i < j; i++){
        str[k+i] = str2[i];
    }
    return str;
}

char *ToPigLatin(char str[]){
    int i = 0;
    char way[4] = {'w','a','y','\0'};
    char ay[3] = {'a', 'y', '\0'};
    char empty[MAX];
    char finalstring[MAX];

    if (str[i] == my_vowel(str[i])){
        my_strcat(str, way);
        my_strcat(finalstring, str);
    }else {
        char cons[MAX];
        while (my_vowel(str[i]) == 0 && str[i] != 'Y' && str[i] != 'y'){
            //my_strcat(cons, str[i]);
            cons[i] = str[i];
            i++;
        }
        while (str[i] != '\0'){ //after a vowel is found
            //my_strcat(finalstring, str[i]);
            finalstring[i] = str[i];
            i++;
        }
        my_strcat(finalstring, cons);
        my_strcat(finalstring, ay);
    }

    finalstring[i] = '\0';
    return finalstring;
}

int main(){
    char str1[MAX];
    char str2[MAX];
    char str3[MAX];
    char str4[MAX];
    char str5[MAX];

    printf("Enter 5 words");
    scanf("%s %s %s %s %s", &str1, &str2, &str3, &str4, &str5);
    printf("%s\n%s\n%s\n%s\n%s\n", ToPigLatin(str1), ToPigLatin(str2), ToPigLatin(str3), ToPigLatin(str4), ToPigLatin(str5));

}