#include <stdio.h>

int main() {
  float a,b,c,avg;
   printf("Enter the value of a: ");
   scanf("%f",&a);
    printf("Enter the value of b: ");
   scanf("%f",&b);
    printf("Enter the value of c: ");
   scanf("%f",&c);
   avg=(a+b+c)/2;
   printf("Average of %.2f,%.2f,%.2f is %.2f",a,b,c,avg);
   
   
    return 0;
}
