#include <stdio.h>
#include <string.h>
#include "prob.h"

int main(){


    wordentry list[] = {
        {"Nezuko"},
        {"Tanjiro"},
        {"zenitsu"},
        {"Giyu"},
        {"Giyome"}
    };

    char input[50]; // I made it for user input
    printf("Search here:   \n");
    fgets(input,50,stdin);
    
// remove the new line last work
trim(input, sizeof(input));



    char *get = find_word(list,input, sizeof(list)); // calling the function using pointer to get the memory

if(get != NULL){
    printf("word found \"%s\" ", get);

}else{
    printf("sorry, word not found");
  
}


return 0; // return 1 usually means false and terminating the program and return 0 means True

}
