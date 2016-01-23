/*macro*/

#define TAMANHO 2 
#define INT_REG 0
#define BUFFER 1024

/*CABEÇALHO*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <conio2.h>

/*ESTRUTURA*/

struc cadstro 
{
	char nome [30];
	int idade;
	char idade2 [4];
	char sexo;
	char sexo2;
	
};

struct cadastro dados [TAMANHO+1];