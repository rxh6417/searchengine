//# you are in prob.h
//function declaration for prob.c



typedef struct{
    char *word;

}wordentry;

// wordentry words[] means ======  *word[] its my data type
char *find_word(wordentry words[], char *key, int num_words); // *find_word means the star "*" pointer to a character.

//********************************/
// to remove new line character/////
void trim(char key[], int size);////
//********************************/