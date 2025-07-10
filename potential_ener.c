#include <stdio.h>

int main() {
    float m,g,h,potential_ener;
    printf("Enter the mass: ");
    scanf("%f",&m);
    printf("Enter the height: ");
    scanf("%d",&h);
    g=9.18;
    if(m == 0)
    {
        printf("Mass cannot be zero");
    }
    else
    {
    potential_ener = m*g*h;
    printf("Potential energy is: %.2f ",potential_ener);
    }
    return 0;
}
