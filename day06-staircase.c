#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n, i, j; 
    scanf("%d",&n);

    for ( i = 0; i < n; ++i ) {
    	for ( j = i; j < n - 1; ++j ) {
    		printf(" ");
    	}
    	for ( j = 0; j <= i; ++j ) {
    		printf("#");
    	}
    	printf("\n");
    }

    return 0;
}
