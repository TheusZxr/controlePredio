#include <stdio.h>
#include "predio.h"

int main()
{
	int predio[20][8], nAndar = 0, nUnidade = 0, nMoradores = 0, opcao = 0, prediosComMoradorAP, qntdMinima, qntdMaxima, resultado;

	do {
		//exibir as opcoes
		printf("\n1) Inicializar o predio");
		printf("\n2) Alterar o numero de moradores de um apartamento");
		printf("\n3) Consultar o numero de moradores de um apartamento");
		printf("\n4) Imprimir o numero de moradores de cada apartamento");
		printf("\n5) Imprimir o numero de moradores do predio");
		printf("\n6) Imprimir o numero total de moradores de cada andar");
		printf("\n7) Informar quais apartamentos estao vazios (ou seja, sem moradores)");
		printf("\n8) Identificar o apartamento com o maior numero de moradores");
		printf("\n9) Informar a quantidade de apartamentos que possuem moradores");
		printf("\n10) Informar quantidade minima e máxima de moradores");
		printf("\n11) Finalizar programa");
		printf("\nEscolha uma opcao: ");
		scanf("%d", &opcao);

		switch(opcao) {
		case 1: 
			inicializarPredio(predio);
			break;
		case 2:
			//atribuir moradores em uma unidade
			printf("Digite o numero do andar: ");
			scanf("%d", &nAndar);
			printf("Digite o numero do unidade: ");
			scanf("%d", &nUnidade);
			printf("Digite o numero de moradores: ");
			scanf("%d", &nMoradores);

			alterarNumeroMoradoresApartamento(predio, nAndar, nUnidade, nMoradores);
			break;
		case 3:
			printf("Digite o numero do andar: ");
			scanf("%d", &nAndar);
			printf("Digite o numero do unidade: ");
			scanf("%d", &nUnidade);
			imprimirNumeroMoradoresApartamento(predio, nAndar, nUnidade);
			break;
		case 4:
			imprimirPredio(predio);
			break;
		case 5: 
			resultado = calcularTotalMoradores(predio);
			printf("\nO total de moradores do predio eh: %d", resultado);
			break;
		case 6:
			imprimirNumeroMoradoresPorAndar(predio);
			break;
		case 7:
			imprimirApartamentosVazios(predio);
			break;
		case 8:
		    imprimirApartamentoMaiorNumeroMoradores(predio);
        	break;
        case 9:
			prediosComMoradorAP = informarQuantidadeAPComMorador(predio);
			printf("\nO total de apartamentos com moradores eh: %d", prediosComMoradorAP);
        	break;
		case 10:
			printf("\nDigite a quantidade minima de moradores: ");
			scanf("%d", &qntdMinima);
			printf("\nDigite a quantidade maxima de moradores: ");
			scanf("%d", &qntdMaxima);
			informarEImprimirUnidadesMaxEMin(predio, nMoradores, qntdMinima, qntdMaxima);
			break;
		case 11:
			printf("Saindo do programa...\n");
			break;
        default:
        	printf("Escolha uma opcao valida\n");
		}
	} while(opcao != 11);

	return 0;
}

