#include <stdio.h>

int main()
{
    unsigned int nombre;
    unsigned int diviseur;
    unsigned int reste;
        
    for (nombre = 2; nombre != 0; nombre++)
    {
        for (diviseur = 2, reste = 1; (diviseur < nombre) && (reste > 0); diviseur++)
        {
            reste = nombre % diviseur;
        }
        if (reste > 0)
        {
            printf("%d\n", nombre);
        }
    }
    
    return;
}
