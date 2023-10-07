#include <stdio.h>

int existeValor(int *arreglo, int valor, int longitud) {
	
	int existe = 0;

	for (int i = 0; i < longitud; i++) {
		if (arreglo[i] == valor){
			printf("El valor existe en la posicion: %d",arreglo[i]);
			existe=1;
			break;
		}
	}

	if (existe == 0){
	printf("El valor no existe");
	}
}

int main (){
	int arreglo[] = {2, 4, 6, 23, 56, 79};
	
	int longitud = sizeof(arreglo)/sizeof(arreglo[0]);

	int valor;
	
	printf("Ingrese un valor entero para verificar si se encuentra en el arreglo: ");
    	
	scanf("%d", &valor);

	existeValor(arreglo, valor, longitud);
}
