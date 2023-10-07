#include <stdio.h>


//Busqueda lineal
int busquedaLineal(int *arreglo, int valor, int longitud) {
	
	int existe = 0; //Variable para reconocer si existe el valor en el arreglo

	for (int i = 0; i < longitud; i++) {
		if (arreglo[i] == valor){
			printf("El valor existe en la posicion: %d",i);
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

	busquedaLineal(arreglo, valor, longitud);
	//busquedaBinaria(arreglo, valor, longitud);
}
