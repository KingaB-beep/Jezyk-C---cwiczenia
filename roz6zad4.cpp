#include <stdio.h>

int main() 
{
    char ch = 'A'; 

    for (int rzad = 1; rzad <= 6; rzad++) 
    { 
        for (int ileliter = 1; ileliter <= rzad; ileliter++) 
        { 
            printf("%c", ch++); 
        }
        printf("\n"); 
    }

    return 0;
}
