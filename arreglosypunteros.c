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

                        min = arreglo[i];
                }
        }
        return max;
}





int main (){
        int arreglo[] = {21, 24, 65, 3, 56, 12, 35, 15};

        int longitud = sizeof(arreglo)/sizeof(arreglo[0]);
	
	int min = Min(arreglo, longitud);
       	
	printf("El valor minimo del arreglo es: %d\n", min);
	
	int max = Max(arreglo, longitud);

        printf("El valor maximo del arreglo es: %d\n", max);

	return 0;	
}

