#include <stdio.h>

float urok(int x) {
	if (x <= 1) return x * 1.01;
	else return urok(x - 1) * 1.01;
}

int main() {
	printf("Úrok:\n");
	printf("%f\n", urok(1));
	printf("%f\n", urok(5));
	printf("%f\n", urok(10));
	printf("%f\n", urok(15));
}