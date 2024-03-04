#include <stdio.h>

int input() {
	int rows;
	printf("Enter rows: ");
	scanf("%d", &rows);
	return rows;
}

int main(void) {
	int x = input();

	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= x*2-1; j++) {
			if (j <= x-i || j >= x+i) {
				printf(" ");
			} else {
				printf("*");
			}
		}
		printf("\n");
	}
}
