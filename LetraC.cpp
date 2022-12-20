#include <stdio.h>

int fatorial(int n) {
	int fat = 1;
	for(int i=n; i>1; i--) {
		fat *= i;
	}
	return fat;
}

int main() {
	int valor;
	scanf("%d", &valor);
	fatorial(valor);
	return 0;
}
