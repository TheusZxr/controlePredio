#include <stdio.h>
#include "predio.h"

void imprimirNumeroMoradoresApartamento(int predio[andares][unidades], int nAndar, int nUnidade){
	printf("%d moradores vivem no andar %d na unidade %d", predio[nAndar-1][nUnidade-1], nAndar, nUnidade);
}


void inicializarPredio(int predio[andares][unidades]) {
	int i, j;
	for(i = 0; i < andares; i++)
		for(j = 0; j < unidades; j++)
			predio[i][j] = 0;
}

void alterarNumeroMoradoresApartamento(int predio[andares][unidades], int nAndar, int nUnidade, int nMoradores) {
	predio[nAndar - 1][nUnidade - 1] = nMoradores;
}

void imprimirPredio(int predio[andares][unidades]) {
    printf("Andar\tUnid_1\tUnid_2\tUnid_3\tUnid_4\tUnid_5\tUnid_6\tUnid7\tUnid_8\n");
	for(int i = 19; i >= 0; i--) {
		printf("%d\t", i + 1);
		for(int j = 0; j < 8; j++)
			printf("%d\t", predio[i][j]);
		printf("\n");
	}
}

int calcularTotalMoradores(int predio[][8]) {
	int totalMoradores = 0;
	for(int i = 0; i < 20; i++)
		for(int j = 0; j < 8; j++)
		totalMoradores += predio[i][j];
	return totalMoradores;
}

void imprimirApartamentosVazios(int predio[][8]) {
	for(int i = 0; i < 20; i++)
		for(int j = 0; j < 8; j++)
			if(predio[i][j] == 0)
				printf("O apartamento do andar %d unidade %d esta vazio", i+1, j+1);
}

void imprimirNumeroMoradoresPorAndar(int predio[][8]) {
	for(int i = 0; i < 20; i++) {
		int totalMoradoresAndar = 0;
			for(int j = 0; j < 8; j++)
				totalMoradoresAndar += predio[i][j];

		printf("\nO total de moradores do andar %d eh: %d", i+1, 
	    	totalMoradoresAndar);
	}
}

void imprimirApartamentoMaiorNumeroMoradores(int predio[][8]) {
	int andarMaior = 0, unidadeMaior = 0;
	for(int i = 0; i < 20; i++) {
		for(int j = 0; j < 8; j++)
			if(predio[i][j] > predio[andarMaior][unidadeMaior]) {
				andarMaior = i;
				unidadeMaior = j;
			}
	    }
	printf("\nO apartamento com maior numero de moradores eh do andar %d e da unidade %d",
			andarMaior+1, unidadeMaior+1);
}

int informarQuantidadeAPComMorador(int predio[][8]){
			int qntdApartamentosComMoradores = 0;
			for(int i = 0; i < 20; i++){
				for(int j = 0; j < 8; j++){
					if(predio[i][j] != 0){
						qntdApartamentosComMoradores++;
					}
				}
			}
			return qntdApartamentosComMoradores;
}

void informarEImprimirUnidadesMaxEMin(int predio[][8], int nMoradores, int qntdMinima, int qntdMaxima){
			int qntdApartamentos = 0;
			for(int i = 0; i < 20; i++){
				for(int j = 0; j < 8; j++){
					if(predio[i][j] >= qntdMinima && predio[i][j] <= qntdMaxima){
						printf("Andar%d\t unidade %d\n", i + 1, j + 1);
						qntdApartamentos++;
					}
				}
			}
			printf("Totalizando %d apartamentos\n", qntdApartamentos);
}