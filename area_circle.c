#include <stdio.h>

int main() {
             float rad,area;
             char ch;
             float pie = 3.14;
           do{
             printf("Enter the value of rad: ");
             scanf("%f",&rad);
             if(rad==0){
                 printf("This is point circle");
                }
            if(rad>0)
             {
              area = pie*(rad*rad);
            printf("Area of circle: %.2f",area);
            }
            else{
                 printf("Cannot calculate as negative values are given");
                }
                printf("\nEnter your choice: ");
            scanf(" %c",&ch);
             } while (ch=='y');
             if(ch!='y')
             {
             printf("Code finished");}
           
    return 0;
}
