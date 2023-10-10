#include <stdio.h>

int main (){
        int arreglo[] = {21, 24, 65, 3, 56, 12, 35, 15};

	printf("%d\n", arreglo[6]);

        int longitud = sizeof(arreglo)/sizeof(arreglo[0]);
	
	printf("%d\n", longitud);
}

