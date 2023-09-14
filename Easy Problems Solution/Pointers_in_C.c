#include <stdio.h>

void update(int *a,int *b) {  
   int sum=0;int sum1=0;
   sum= *a + *b;
   sum1= *a - *b;
   *a=sum;
   *b=sum1;
   if(*b<0)
   *b= (*b)*(-1);
   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
