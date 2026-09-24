#define andares 20
#define unidades 8

void imprimirNumeroMoradoresApartamento(int predio[andares][unidades], int nAndar, int nUnidade);
void inicializarPredio(int predio[andares][unidades]);
void alterarNumeroMoradoresApartamento(int predio[andares][unidades], int nAndar, int nUnidade, int nMoradores);
void imprimirPredio(int predio[andares][unidades]);
int calcularTotalMoradores(int predio[][8]);
void imprimirApartamentosVazios(int predio[][8]);
void imprimirNumeroMoradoresPorAndar(int predio[][8]);
void imprimirApartamentoMaiorNumeroMoradores(int predio[][8]);
int informarQuantidadeAPComMorador(int predio[][8]);
void informarEImprimirUnidadesMaxEMin(int predio[][8], int nMoradores, int qntdMinima, int qntdMaxima);