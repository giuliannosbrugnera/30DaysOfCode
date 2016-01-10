#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int a, b, n, t, i, last, term;

	scanf("%d", &t);

	while ( t-- ) {
		scanf("%d %d %d", &a, &b, &n);
		last = 0;
		term = a;
		for ( i = 0; i < n; i++ ) {
			last = pow(2, i) * b;
			term += last;
			printf("%d ", term);
		}
		printf("\n");
	}

    return 0;
}
