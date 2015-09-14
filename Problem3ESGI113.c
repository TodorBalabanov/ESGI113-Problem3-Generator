#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	int X;
	int Y;
	int n;
	int i;
	int maxPieceArea;
	int minSide = 30;

	srand( time(NULL) );

	X = 1000 + rand() % 1;
	Y = 15000 + rand() % 1;

	n = 700 + rand() % 101;

	maxPieceArea = X * Y / n;

	printf("%d", n);
	printf("\r\n");

	printf("%d", X);
	printf(" ");
	printf("%d", Y);
	printf("\r\n");

	for(i=0; i<n; i++) {
		int a = minSide + rand() % (X-minSide+1);
		int b = minSide + rand() % (Y-minSide+1);

		while(a*b > maxPieceArea) {
			a = minSide + rand() % (X-minSide+1);
			b = minSide + rand() % (Y-minSide+1);
		}

		printf("%d", a);
		printf(" ");
		printf("%d", b);
		printf("\r\n");
	}

	return 0;
}
