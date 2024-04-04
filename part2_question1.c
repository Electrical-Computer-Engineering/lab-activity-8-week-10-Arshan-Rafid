//Arshan Rafid (SBU ID: 115871065)

#include <stdio.h>
#include <stdlib.h>

int my_strcmp(char str[], char str2[]){
    int l = 0;
    while ((str2[l]) != '\0'){ // need length of second string
        l++;}
    int k= 0;
    while ((str[k]) != '\0'){ // need length of second string
        k++;}

    int j = 0;
    for (int i = 0; i < l; i++){
        if (str[i] == str2[i]){
            j++;
    } 
    if (j == k){
        return 1;
    }
    }
}

int my_strncmp(char str[], char str2[], int n){
    int j = 0;
    for (int i = 0; i < n; i++){
        if (str[i] == str2[i]){
            j++;
    } 
    if (j == n){
        return 1;
    }
    }
}

char *my_strcpy(char str[], char str2[]){
    int j = 0;
    while ((str[j] = str2[j]) != '\0'){
        j++;
    }
    return str;
}

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

char *my_reverse(char str[], char str2[]){
    int k= 0;
    while ((str2[k]) != '\0'){ // need length of second string
        k++;}
    k -=1;

    int j = 0;
    for (k, j; k >= 0; k--, j++){
        str[j] = str2[k];
    }
    str[j] = '\0';
    return str;

}

int main(){
    char str[6] = {'1', '2', '0', '0','0','\0'};
    char str2[3] = {'1', '3', '\0'};
    int n = 1;
    if (my_strcmp(str,str2)){
        printf("they're the same\n");
    }

    if (my_strncmp(str,str2,n)){
        printf("they're the same for the first n terms\n");
    }

    my_strcpy(str,str2);
    printf("%s\n", str);


    char str3[6] = {'1', '2', '\0'}; // reinitializing these strings to demonstrate the next question
    char str4[3] = {'1', '3', '\0'};
    my_strcat(str3,str4);
    printf("%s\n", str3);


    char str5[6] = {'1', '2', '0', '0','0','\0'}; // reinitializing these strings to demonstrate the next question
    char str6[3] = {'1', '3', '\0'};
    my_reverse(str5,str6);
    printf("%s\n", str5);




// second run 

    char str7[6] = {'1', '2', '0', '0','0','\0'};
    char str8[3] = {'1', '3', '\0'};
    n = 1;
    if (my_strcmp(str7,str8)){
        printf("they're the same\n");
    }

    if (my_strncmp(str7,str8,n)){
        printf("they're the same for the first n terms\n");
    }

    my_strcpy(str7,str8);
    printf("%s\n", str7);


    char str9[6] = {'1', '2', '\0'}; // reinitializing these strings to demonstrate the next question
    char str10[3] = {'1', '3', '\0'};
    my_strcat(str9,str10);
    printf("%s\n", str9);


    char str11[6] = {'1', '2', '0', '0','0','\0'}; // reinitializing these strings to demonstrate the next question
    char str12[3] = {'1', '3', '\0'};
    my_reverse(str11,str12);
    printf("%s\n", str11);

    return 0;
}