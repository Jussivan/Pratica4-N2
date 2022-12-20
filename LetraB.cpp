#include <stdio.h>
#include <locale.h>

char* teste(int a) {
	if(a>0) {
		return "Falso";	
	}
	return "Verdadeiro";
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int valor;
	scanf("%d", &valor);
	teste(valor);
	char* b = teste(valor);
	printf("O número é negativo?\n%s", b);
	return 0;
}
