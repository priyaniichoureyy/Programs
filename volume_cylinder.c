#include <stdio.h>

int main() {
   float rad,height,volume;
   int pie=3.14;
   printf("Enter the value of rad: ");
   scanf("%f",&rad);
   printf("Enter the value of height: ");
   scanf("%f",&height);
   volume=pie*(rad*rad*height);
   printf("Volume of cylinder is: %.2f",volume);
    return 0;
}
