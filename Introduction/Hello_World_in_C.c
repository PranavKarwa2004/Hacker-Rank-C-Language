#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("[^\n]%*c", &s);
    printf("Hello, World!\n");
    for(int i=0;s[i]!='\0';i++)
      	printf("%c",s[i]);  
    return 0;
}