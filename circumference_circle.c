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
                 printf("\n%f\n",circum);
             }
            else if(rad>0)
             {
              circum = 2*pie*rad;
            printf("Area of circle: %.2f\n",circum);
            }
            else{
                 printf("Cannot calculate as negative values are given\n");
                }
                printf("\nEnter your choice: ");
            scanf(" %c",&ch);
             } while (ch=='y');
             if(ch!='y')
             {
             printf("Code finished");}
           
    return 0;
}
