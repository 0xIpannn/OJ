#include <stdio.h>

int main() {
    double discount, discountedPrice; 
    double originalPrice[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%lf %lf", &discount, &discountedPrice);
        originalPrice[i] = discountedPrice / ((100 - discount)/100);     
    }
    
    for (int i = 0; i < 4; i++)
    {
        printf("$%.2lf\n", originalPrice[i]);
    }
    
}