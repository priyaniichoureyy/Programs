#include <stdio.h>

int main() {
   int volume,rad;
   int pie=3.14;
   printf("Enter the radius of sphere: ");
   scanf("%d",&rad);
   volume=pie*(rad*rad*rad);
   volume=volume*(4/3);
   printf("%d is the volume of sphere",volume);
    return 0;
}
