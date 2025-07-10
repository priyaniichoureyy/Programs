#include <stdio.h>

int main() {
   int side,tsa;
   printf("Enter the side of cube: ");
   scanf("%d",&side);
   tsa = side*side;
   tsa = tsa*6;
   printf("%d is the total surface area of cube",tsa);
    return 0;
}
