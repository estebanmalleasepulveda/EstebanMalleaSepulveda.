//TAREA LENGUAJE DE PROGRAMACION
//CARRERA: INGIENERIA CIVIL INFORMATICA
//PROFESOR:SERGIO BALTIERRA
//NOMBRE:ESTEBAN MALLEA

//BILIOTECAS Y CONSTANTES

#include <stdio.h>
#define C 16   
#define UNO 1  
#define CERO 0

//PROGRAMA PRINCIPAL

main() {

	int res=0;  //RESSULTADO
	int x=0;    // x ES UN VALOR AUXILIAR
	
	res=(++x - CERO - CERO - UNO )*(--x * UNO / UNO + UNO - CERO)+C;

	printf("El numero es:%d\n",res);

	return 0;
}
