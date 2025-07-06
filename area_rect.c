#include <stdio.h>

int main() {
             float len,wid;
             float area;
             printf("Enter the value of len: ");
             scanf("%f",&len);
             printf("Enter the value of wid: ");
             scanf("%f",&wid);
             if(len>0 && wid>0)
             {
             area = len*wid;
             printf("Area of rectangle: %.2f",area);
             }
             else{
                 printf("Cannot calculate as negative values are given");
             }
             
    return 0;
}
