// Arshan Rafid (SBU ID: 115871065)

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int my_vowel(char letter){ // check for vowels
    if (letter == 'A' || letter == 'a' || letter == 'E' || letter == 'e' || letter == 'I' || letter == 'i' || letter == 'O' || letter == 'o' || letter == 'U' || letter == 'u' || letter == 'Y' || letter == 'y'){
        return 1;
    }
    else{
        return 0;
    }
}

int my_is_upper(char letter){ // check for uppercase
    if (letter >= 'A' && letter <= 'Z'){
        return 1;
    }
    else{
        return 0;
    }
}

int my_to_upper(char letter){ // convert to upper from lower
    if (letter >= 'a' && letter <= 'z'){
        return 1;
    }
    else{
        return 0;
    }
}

int my_to_lower(char letter){ // convert to lower from upper
    if (letter >= 'A' && letter <= 'Z'){
        return 1;
    }
    else{
        return 0;
    }
}

int my_strlen(char str[]) //check string length
{
  int i = 0;
  while (str[i] != '\0') {
    i++;
  }
  return i;
}

char *my_strcpy(char str[], char str2[]){ //copies string
    int j = 0;
    while ((str[j] = str2[j]) != '\0'){
        j++;
    }
    return str;
}

char *my_strcat(char str[], char str2[]){ //concatenate (add to end of string)
    int j = 0;

    while ((str2[j]) != '\0'){ // need length of second string
        j++;
    }

    int k= 0;
    while ((str[k]) != '\0'){ // need length of first string
        k++;
    }

    for (int i = 0; i < j; i++){
        str[k+i] = str2[i];
    }
    return str;
}



char *ToPigLatin(char *word) 
{
  char way[] = {'w', 'a', 'y', '\0'}; // for words starting with vowels
  char ay[] = {'a', 'y', '\0'}; // for consonant words
  int i = 0, j = 0;
  char cons[MAX] = {'\0'}; //need to initialize strings here
  char vow[MAX] = {'\0'};
  char finalstring[MAX] = {'\0'};


  if (my_vowel(word[i]) == 0 || word[0] == 'y' || word[0] == 'Y'){ //if the word starts with a consonant, y in this case is a consonant
    while (my_vowel(word[i]) == 0) //continue as long as the character is a consonant and not a vowel
    {
      cons[i] = word[i];
      i++;
    }

    while (word[i] != '\0') //once there is a vowel, continue until end of string
    {
      vow[j] = word[i];
      i++;
      j++; // use j instead of i because we start from 0 again for vow string
    }

    if (my_is_upper(cons[0])){ //checks if first consonant is an uppercase
        if (my_to_upper(vow[0])){
            vow[0] = vow[0] - 32; // convert the first letter of the vowel string to uppercase, in this case the first letter is always the vowel
        }
        if (my_to_lower(cons[0])){
            cons[0] = cons[0] + 32; // convert the first consonant that will be moved over to the end to lower case
        }
    }
    my_strcpy(finalstring, vow); //copy the letters after the first vowel
    my_strcat(finalstring, cons); //add the consonants preceding the first vowel
    my_strcat(finalstring, ay); // add "ay"
  } 


  else if (my_vowel(word[0]) == 1) //if the word starts with a vowel, else if and not if because if would've caused words beginning with Y to have problems
  {
    my_strcpy(finalstring, word);
    my_strcat(finalstring, way); //we're just adding way really, no need to check for upper case since the word isn't moving
  }
  
  finalstring[my_strlen(finalstring)] = '\0'; // end final string
  my_strcpy(word, finalstring); //copy the final string back into the word argument
  return word; // return argument
}

int main() 
{
  char inputs[5][MAX]; // array to hold all the input strings for simplicity  
  int i = 0;
  printf("Input 5 words: ");
  scanf("%s %s %s %s %s", inputs[0], inputs[1], inputs[2], inputs[3], inputs[4]);
  printf("%s %s %s %s %s", ToPigLatin(inputs[0]), ToPigLatin(inputs[1]), ToPigLatin(inputs[2]), ToPigLatin(inputs[3]), ToPigLatin(inputs[4]));

}