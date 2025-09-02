#include <stdio.h>
int main() {
    int i, j;

    // Outer loop controls rows
    for (i = 1; i <= 5; i++) {
        // Inner loop controls columns
        for (j = 1; j <= 5; j++) {
            printf("%4d", i * j);  // print product with spacing
        }
        printf("\n"); // new line after each row
	{
	int k= 20; 
	printf("%d\n",k);
	}
    }

    return 0;
}

