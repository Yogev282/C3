#include <stdio.h>
#include <string.h>
#include "Func.h"
#include "Func.c"
int main(){
    
    char str[WORD];
    char option;

    getWord(str);
    
    option = getchar();
    getchar();
    getchar();

    if(option == 'a'){
        print_lines(str);
    }
    else if(option == 'b'){
        print_similar_words(str);
    }
    else{
        printf("Invalid input\n");
    }
}
