#include<stdio.h>
#include<string.h>
#include <stdlib.h>

void reverse1(char* str, int start, int end)
{
    if (str == NULL)
        return;
    int i = start, j = end;
    while( i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
    }
}

int main()
{
    char *str = malloc(40);
    int i=0, j=0;
    strcpy(str,"Test the reverse function");
    reverse1(str, 0, strlen(str)-1);
    while(i < strlen(str))
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            reverse1(str, j, i-1);
            j = i+1;
        }
        i++;
    }
    printf("str= %s\n", str);
    return 0;
}
