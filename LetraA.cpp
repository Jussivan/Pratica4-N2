#include <stdio.h>

int soma(int a,int b) {
	return a + b;
}

int main() {
	int v1, v2, resultado;
	scanf("%d", &v1);
	scanf("%d", &v2);
	soma(v1,v2);
	resultado = soma(v1,v2);
	printf("%d", resultado);
	return 0;
}
