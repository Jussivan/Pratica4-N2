#include <stdio.h>
#include <locale.h>

char* teste(int a) {
	if(a>0) {
		return "Falso";	
	}
	if(a==0) {
		return "� Zero";
	}
	return "Verdadeiro";
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int valor;
	scanf("%d", &valor);
	teste(valor);
	char* b = teste(valor);
	printf("O n�mero � negativo?\n%s", b);
	return 0;
}
