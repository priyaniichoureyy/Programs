#include <stdio.h>

int main() {
             float len,wid;
             float area;
             printf("Enter the value of len: ");
             scanf("%f",&len);
             printf("Enter the value of wid: ");
             scanf("%f",&wid);
             area = len*wid;
             printf("Area of rectangle: %.2f",area);
             
    return 0;
}
