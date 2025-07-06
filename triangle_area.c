#include <stdio.h>
int main() {
     float base,height;
     float area;
     printf("Enter the base of triangle: ");
     scanf("%f",&base);
     printf("Enter the height of triangle: ");
     scanf("%f",&height);
     if( height>0 && base>0)
     {
         area=base*height;
         area =  area/2;
         printf("Area of triangle is %.2f ",area);
     }
     else{
         printf("Values are not correct to calculate area");
     }
     
    return 0;
}
