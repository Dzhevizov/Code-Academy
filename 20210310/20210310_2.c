/*Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 500

struct stack
{
    char stk[MAX];
    int top;
} s;

void push(char item)
{
    if (s.top == (MAX - 1))
        printf("Stack is Full\n");
    else
    {
        s.top = s.top + 1; 
        s.stk[s.top] = item;
    }
}

void pop()
{
    if (s.top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        s.top = s.top - 1; 
    }
}

int main()
{
    char exp[MAX];
    char c = 0;
    int i = 0;
    s.top = -1;
    int line = 1;
    FILE *fp;
    fp = fopen("input.txt", "rt");
    if (fp == NULL)
    {
        perror("Error opening file");
        return (-1);
    }
    while ((c = fgetc(fp)) != EOF){
        exp[i] = c;
        i++;
    }
    for (i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '\n')
        {
            line++;
        }
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(exp[i]);
            continue;
        }
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (exp[i] == ')')
            {
                if (s.stk[s.top] == '(')
                {
                    pop();
                }
                else
                {
                    printf("\nUNBALANCED EXPRESSION\n");
                    printf("Line: %d\n", line);
                    return 0;
                }
            }
            if (exp[i] == ']')
            {
                if (s.stk[s.top] == '[')
                {
                    pop();
                }
                else
                {
                    printf("\nUNBALANCED EXPRESSION\n");
                    printf("Line: %d\n", line);
                    return 0;
                }
            }
            if (exp[i] == '}')
            {
                if (s.stk[s.top] == '{')
                {
                    pop();
                }
                else
                {
                    printf("\nUNBALANCED EXPRESSION\n");
                    printf("Line: %d\n", line);
                    return 0;
                }
            }
        }
    }
    if (s.top == -1)
    {
        printf("\nBALANCED EXPRESSION\n");
    }
    else
    {
        printf("\nUNBALANCED EXPRESSION\n");
        printf("Line: %d\n", line);
        return 0;
    }
    return 0;
}
