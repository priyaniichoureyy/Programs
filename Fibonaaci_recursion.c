#include <stdio.h>

int fibo(int n)
{
    if(n==0)
    {
     return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}

int main() {
    int i,num;
    printf("Enter how many numbers you want: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Please give correct ");
    }
    else{
  for(i=0;i<num;i++)
  {
    printf("%d\t",fibo(i));
  }
    }
    return 0;
}
