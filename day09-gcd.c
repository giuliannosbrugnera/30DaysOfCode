#include <stdio.h>

int gcd( int a, int b );

int main () {

    int x, y;
    
    scanf("%d %d", &x, &y);
    printf("%d\n", gcd( x, y ));
    
    return 0;

}

int gcd( int a, int b ) {
    
    if ( (b <= a) && ((a % b) == 0) ) {
        return b;
    }
    else if (a < b) {
        return gcd(b, a);
    }
    else {
        return gcd(b, a % b);
    }
    
}
