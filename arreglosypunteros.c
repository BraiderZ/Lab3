#include <stdio.h>

int Min(int *arreglo, int longitud){
	
	int min = arreglo[0];

	for (int i=1 ; i < longitud ; i++) {

		if (arreglo[i] < min){
			
			min = arreglo[i];
		}
	}
	return min;
}

int Max(int *arreglo, int longitud){

        int max = arreglo[0];

        for (int i=1 ; i < longitud ; i++) {

                if (arreglo[i] > max){

                        max = arreglo[i];
                }
        }
        return max;
}

void MinMaxPunteros(int * arreglo, int * min, int * max, int longitud) {
        *min = *arreglo;
        *max = *arreglo;
        for (int i = 0; i < longitud; i++) {
                if(*(arreglo+i) > *max) {
                        *max = *(arreglo+i);
                }
		if(*(arreglo+i) < *min) {
                        *min = *(arreglo+i);
		}
	}

	printf("Punteros-El valor minimo del arreglo es: %d\n", *min);
	printf("Punteros-El valor maximo del arreglo es: %d\n", *max);
}


int main (){
        int arreglo[] = {21, 24, 65, 3, 56, 12, 35, 15};

        int longitud = sizeof(arreglo)/sizeof(arreglo[0]);
	
	int min = Min(arreglo, longitud);
       	
	printf("El valor minimo del arreglo es: %d\n", min);
	
	int max = Max(arreglo, longitud);

        printf("El valor maximo del arreglo es: %d\n", max);
	
	int minimo, maximo; //Para comodidad del puntero, se definen dos variables que se envian como parametros
	MinMaxPunteros(arreglo, &minimo, &maximo, longitud);

	return 0;	
}

