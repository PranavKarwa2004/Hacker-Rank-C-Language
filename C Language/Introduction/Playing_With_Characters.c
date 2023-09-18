#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
     char ch;int i;
    char word[100];
    char sen[100];
    scanf("%c", &ch);
    scanf("%s", word);
    scanf("\n"); 
    scanf("%[^\n]%*c", sen);
    printf("%c\n",ch);
    printf("%s\n",word);
    for(i=0;sen[i]!='\0';i++)
    printf("%c",sen[i]);  
    return 0;
}