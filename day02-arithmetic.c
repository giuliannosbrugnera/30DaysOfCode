#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, x;
    double m;
    
    scanf("%lf", &m);
    scanf("%d", &t);
    scanf("%d", &x);

    double tip = (m * t) / 100;
    double tax = (m * x) / 100;
    double finalPrice = m + tip + tax;
    
    printf("The final price of the meal is $%d.\n", (int)round(finalPrice));
    
    return 0;
}
