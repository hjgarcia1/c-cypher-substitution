#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void encrypt_text(char *text, char *key);

int main(int argc, char *argv[])
{
    char *key = "YTNSHKVEFXRBAUQZCLWDMIPGJO";
    char *message = "A new stringz";
    //ciphertext: jrssb, ybwsp

    encrypt_text(message, key);

    printf("\n");

    return 0;
}

void encrypt_text(char *text, char *key)
{
    int i, j;
    char *alphabet = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

    for (i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            for (j = 0; j < strlen(alphabet); j++)
            {
                if (text[i] == alphabet[j])
                {
                    if (isupper(text[i]))
                    {
                        printf("%c", key[j / 2]);
                    }
                    else
                    {
                        printf("%c", tolower(key[j / 2]));
                    }
                    break;
                }
            }
        }
        else
        {
            printf("%c", text[i]);
        }
    }
}