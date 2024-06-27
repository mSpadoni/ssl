#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int esNumero(const char *nro) {
    int tamanio=strlen(nro);
    char caracter;
    for (int i = 0; i < tamanio; i++)
    {    
        caracter=nro[i];
        if (isdigit(caracter)==0)
        {
            return 0;
        }
    }
  return 1;  
}

int main(int argc, char **argv) {
	if (argc != 3) {
		puts("uso: suma nro1 nro2");
		exit(0);
	}

	if (esNumero(argv[1])==0 ||esNumero(argv[2])==0) {
		puts("nro1 y nro2 deben ser constantes numericas");
		exit(-1);
	} 
	int sum1 = atoi(argv[1]);
	int sum2 = atoi(argv[2]);
	printf("la suma de %d y %d es %d", sum1, sum2, sum1+sum2);
	return 0;
}