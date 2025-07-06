#include <stdio.h>

int main() {
             float len,wid;
             float peri;
             char ch;
           do{
             printf("Enter the value of len: ");
             scanf("%f",&len);
            printf("Enter the value of wid: ");
            scanf("%f",&wid);
            if(len>0 && wid>0)
             {
            peri = (len+wid);
            peri=peri*2;
            printf("Perimeter of rectangle: %.2f",peri);
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
