#include <stdio.h>

int main() {
    float mass,volume,kin_energy;
    printf("Enter the value of mass: ");
    scanf("%f",&mass);
    printf("Enter the volume: ");
    scanf("%f",&volume);
    
    if(mass==0)
    {
        printf("Mass cannot be zero");
    }
    else
    {
    kin_energy = mass*(volume*volume);
    kin_energy = (kin_energy)/2;
    printf("Kinetic energy = %.2f",kin_energy);
    }
    return 0;
}
