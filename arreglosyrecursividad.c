#include <stdio.h>

int existeValor(int *arreglo, int valor, int longitud) {
	for (int i = 0; i < longitud; i++) {
		printf("%d",arreglo[i]);
	}
		
}

int main (){
	int arreglo[] = {2, 4, 6, 23, 56, 79};
	
	printf("%d",arreglo[2]);
	
	int longitud = sizeof(arreglo)/sizeof(arreglo[0]);
	
	printf("longitud del arreglo: %d",longitud);

	int valor;
	
	printf("Ingrese un valor entero para verificar si se encuentra en el arreglo: ");
    	
	scanf("%d", &valor);
	
	printf("Valor: %d",valor);

	existeValor(arreglo, valor, longitud);
}
