#include <stdio.h>
int main() {
             float rad,circum;
             char ch;
             float pie = 3.14;
           do{
             printf("Enter the value of rad: ");
             scanf("%f",&rad);
             if(rad==0){
                 printf("This is point circle");
                 circum = 2*pie*rad;
                 printf("%f",circum);
             }
            if(rad>0)
             {
              circum = 2*pie*rad;
            printf("Area of circle: %.2f",circum);
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
