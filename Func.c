#include <stdio.h>
#include <string.h>
#include "Func.h"


int getLine(char line[]){
    int i = 0;
    int j = 0;
    char c;
    while((c = getchar()) != '\n' && c != EOF && c != '\r'){
        if(i < LINE){
            line[j] = c;
            j++;
        }
        i++;
    }
    if(c == '\n'){
        if(i < LINE ){
            line[j] = c;
            j++;
        }
        i++;
    }
    line[j] = '\0';
    return i;
}

int getWord(char w[]){
    char temp;
    int counter = 0;
    int i = 0;
    while((temp = getchar()) != ' ' && temp != '\t' && temp != '\n' && temp != EOF && temp != '\r'){
        counter++;
        w[i] = temp;
        i++;
    }
    w[i] = '\0';
    return counter;
}

int substring( char * str1, char * str2){
    int i = 0;
    int j = 0;
    int counter=0;
    int flag = 0;
    while(str1[i] != '\0'){
        if(str1[i] == str2[j]){
            flag = 1;
            while(str2[j] != '\0'){
                if(str1[i] != str2[j]){
                    flag = 0;
                    break;
                }
                counter++;
                i++;
                j++;
            }
            if(flag)
                return 1;
        }
        counter=0;
        j=0;
        i=i-counter+1;
    }
    return 0;
}

int similar (char *s, char *t){
    int diff = 0;
    int i = 0;
    int j = 0;
    if(strlen(s) - strlen(t) > 1){
        return 0;
    }
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
    getchar();
    getchar();
    while(getLine(line) != 0){
        if(substring(line, str)){
            printf("%s\n", line);
        }
    }
   
}


void print_similar_words(char * str){
    char word[WORD];
    while(getWord(word) != 0){
        if(similar(word, str)){
            printf("%s\n", word);
        }
    }
}