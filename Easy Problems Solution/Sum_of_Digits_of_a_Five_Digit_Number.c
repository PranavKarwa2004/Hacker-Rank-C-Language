#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum=0;
    int n1=n;
    int rem=0;
    while(n1!=0)
    {
        rem=n1%10;
        sum=sum+rem;
        n1=n1/10;
    }
    printf("%d",sum);
    return 0;
}
