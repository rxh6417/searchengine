#include <stdio.h>
#include <string.h>
#include "prob.h"

void trim(char input[], int size){
    int len = strlen(input);
    if(len > 0 && input[len - 1] == '\n'){
        input[len - 1] = '\0';
    }


}


char *find_word(wordentry words[], char *key, int num_words){

    // loop through each names in wordentry
    for(int i = 0; i < num_words; i++){

// compare the names to key
   if(strcmp(words[i].word, key) == 0){ // equal to 0 I assume, 0 means true here if they match then its "TRUE"

// returning the pointer to the matching word
        return words[i].word;  
   }
}
// IF no match is found return NULL
   return NULL; 
}

// working on newline removing

// to remove new line character
