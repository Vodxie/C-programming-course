#include <stdio.h>
#include <string.h>
 
int main(void)
{

    char string[100];

    printf("Enter string: ");

    if(fgets(string, sizeof string, stdin)){
        char *nl = strchr(string, '\n');
        if(nl){

            *nl = '\0';
        }

    printf("Text w/o newlines: !%s1", string);

    }



}