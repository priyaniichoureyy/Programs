#include <stdio.h>

int main() {
   int side,volume;
   printf("Enter the side of cube: ");
   scanf("%d",&side);
   volume = (side*side*side);
   printf("%d is the volume of cube",volume);
    return 0;
}
