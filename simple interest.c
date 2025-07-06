#include <stdio.h>
int main() {
     float p,r,t;
     float interest;
     printf("Enter the value of initial money taken i.e p:  ");
     scanf("%f",&p);
     printf("Enter the value of rate: ");
     scanf("%f",&r);
     printf("Enter the value of time: ");
     scanf("%f",&t);
     if(p>0 && r>0 && t>0)
     {
         interest = p*r*t;
         interest = interest/100;
         printf("Simple interest will be: %.2f",interest);
     }
     else{
         printf("Can't be calculate");
     }
    return 0;
}
