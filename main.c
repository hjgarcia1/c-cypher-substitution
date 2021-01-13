#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void encrypt_text(char *text, int key);

int main(int argc, char *argv[])
{
   
}

void encrypt_text(char *text, int key)
{
    int i;

    for (i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            printf("%c", (int)text[i] + key);
        }
        else
        {
            printf("%c", text[i]);
        }
    }
}