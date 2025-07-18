// Online C compiler to run C program online
#include <stdio.h>

void fibo(int *a,int *b,int *c)
{
    for(int i=0;i<=10;i++){
    *c = *a+*b;
    printf("%d\t", *c);
    *a=*b;
    *b=*c;
    
   }
    printf("\n");
}

int main() {
   int d,e,f;
   printf("Enter the value of d: ");
   scanf("%d",&d);
    printf("Enter the value of e: ");
   scanf("%d",&e);
   fibo(&d,&e,&f);
   
    return 0;
}
