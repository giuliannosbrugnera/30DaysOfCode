#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void int_to_binary( unsigned int num, char * bin );

int main() {

	int t, i;
	unsigned int n;
	char bin[33];

	scanf("%d", &t);

	while ( t-- ) {
		scanf("%u", &n);
		int_to_binary( n, &bin[0] );
		puts(bin);
	}

    return 0;

}

void int_to_binary( unsigned int num, char * bin ) {

	char aux[33];
	int i, j = 0, index = 31;


	while ( num > 0 ) {
		aux[index--] = (num % 2) + 48;
		num = num / 2;
	}

	for ( i = index + 1; i < 32; ++i ) {
		bin[j++] = aux[i];
	}
	bin[j] = '\0';

}
