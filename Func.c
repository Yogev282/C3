#include <stdio.h>
#include <string.h>
#include "Func.h"


int getLine(char s[]){
    int counter = 0;
    int i = 0;
    while((s[i] = getchar()) != '\n' && s[i] != EOF && s[i] != '\r'){
        counter++;
        i++;
    }
    return counter;
}

int getword(char w[]){
    int counter = 0;
    int i = 0;
    while(w[i] != ' ' && w[i] != '\t' && w[i] != '\n' && w[i] != EOF && w[i] != '\r'){
        counter++;
        i++;
    }
    return counter;
}

int substring( char * str1, char * str2){
    int i = 0;
    int j = 0;
    int flag = 0;
    while(str1[i] != '\0'){
        if(str1[i] == str2[j]){
            flag = 1;
            while(str2[j] != '\0'){
                if(str1[i] != str2[j]){
                    flag = 0;
                    break;
                }
                i++;
                j++;
            }
            if(flag)
                return 1;
        }
        i++;
    }
    return 0;
}

int similar (char *s, char *t){
    int diff = 0;
    int i = 0;
    int j = 0;
    
    while(i < strlen(s) && j < strlen(t)){
        if(s[i] != t[j]){
            diff++;
            if(diff > 1){
                return 0;
            }
            i++;
        }
        else{
            i++;
            j++;
        }
    }
    
    return 1;
}

void print_lines(char * str){
    char line[LINE];
    while(getLine(line) != 0){
        if(substring(line, str))
            printf("%s", line);
    }
}

void print_similar_words(char * str){
    char word[WORD];
    while(getword(word) != 0){
        if(similar(word, str))
            printf("%s", word);
    }
}