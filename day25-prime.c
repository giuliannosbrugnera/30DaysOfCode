#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define TRUE  1
#define FALSE 0

int isPrime( int n );

int main() {

    int t, n;
    
    scanf("%d", &t);
    
    while ( t-- ) {
        scanf("%d", &n);
        
        if ( isPrime( n ) ) {
            printf("Prime\n");
        }
        else {
            printf("Not prime\n");
        }
    }
    
    return 0;

}

int isPrime( int n ) {
    
    if ( n == 1 ) {
        return FALSE;
    }
    
    int i;
    int square = (int) sqrt( n );
    
    for ( i = 2; i <= square; ++i ) {
        if ( n % i == 0 ) {
            return FALSE;
        }
    }
    
    return TRUE;
    
}
