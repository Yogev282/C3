#ifndef _FUNC_H_
#define _FUNC_H_

#define WORD 30
#define LINE 256

int substring(char *str1, char *str2);

int similar(char *s, char *t);

void print_lines(char *str);

void print_similar_words(char *str);

int getLine(char line[]);

int getWord(char word[]);

 #endif