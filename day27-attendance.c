#include <stdio.h>

int main() {
    
    // Five test cases
    printf("5\n");
    
    // Test 1: YES
    printf("3 3\n");
    printf("-1 0 1\n");
    
    // Test 2: NO
    printf("4 3\n");
    printf("-1 0 1 -2\n");
    
    // Test 3: YES
    printf("5 5\n");
    printf("-1 0 1 2 3\n");
    
    // Test 4: NO
    printf("6 3\n");
    printf("-1 0 1 -2 5 10\n");
    
    // Test 5: YES
    printf("7 7\n");
    printf("-1 0 1 0 0 0 0\n");
    
    return 0;
    
}
