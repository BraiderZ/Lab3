#include <stdio.h>

int busquedaBinaria(int *arreglo, int valor, int longitud) {

        int existe=0; //Se encarga de ver si el valor existe

        //Variables para calcular el valor de en medio
        int izquierda = 0;
        int derecha = longitud -1;

        while(izquierda <= derecha){

                int numeroMitad =  izquierda + (derecha - izquierda) / 2;

                if (valor == arreglo[numeroMitad]){
                        printf("Binaria-El valor existe en la posicion: %d\n",numeroMitad);
                        existe=1;
			
			break;
                }else if (valor > arreglo[numeroMitad]){

                        izquierda = numeroMitad + 1;
                }else {

                        derecha = numeroMitad -1;
                }
        }
	if (existe == 0){
		printf("Binaria-El valor no existe\n");
	}
}


int busquedaLineal(int *arreglo, int valor, int longitud) {
	
	int existe = 0; //Variable para reconocer si existe el valor en el arreglo

	for (int i = 0; i < longitud; i++) {
		if (arreglo[i] == valor){
			printf("Lineal-El valor existe en la posicion: %d\n",i);
			existe=1;
			break;
		}
	}

	if (existe == 0){
	printf("Lineal-El valor no existe\n");
	}
}

int main (){
	int arreglo[] = {2, 4, 6, 23, 56, 79};
	
	int longitud = sizeof(arreglo)/sizeof(arreglo[0]);

	int valor;
	
	printf("Ingrese un valor entero para verificar si se encuentra en el arreglo: ");
    	
	scanf("%d", &valor);

	busquedaLineal(arreglo, valor, longitud);
	busquedaBinaria(arreglo, valor, longitud);
}
