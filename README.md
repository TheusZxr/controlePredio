 Sistema de Gerenciamento de Moradores de Prédio

Sistema em linguagem C para controle do número de moradores em um prédio residencial, desenvolvido como projeto acadêmico. Utiliza matrizes bidimensionais para representar a estrutura do prédio (andares x unidades) e uma interface de menu interativo no terminal.

 Funcionalidades

- Inicializar o prédio (zerar todos os apartamentos)
- Alterar o número de moradores de um apartamento específico
- Consultar o número de moradores de um apartamento específico
- Imprimir a matriz completa do prédio, andar por andar
- Calcular o total de moradores do prédio
- Calcular o total de moradores por andar
- Identificar apartamentos vazios (sem moradores)
- Identificar o apartamento com o maior número de moradores
- Contar quantos apartamentos possuem moradores
- Listar apartamentos dentro de uma faixa (mínima/máxima) de moradores

 Estrutura do prédio

- **20 andares**
- **8 unidades por andar**
- Representado por uma matriz `int predio[20][8]`, onde cada posição armazena o número de moradores daquele apartamento

 Estrutura do projeto

```
├── main.c       # Menu principal e loop de interação com o usuário
├── predio.c     # Implementação das funções de manipulação do prédio
└── predio.h     # Cabeçalho com constantes (andares, unidades) e assinaturas das funções
```

 Conceitos aplicados

- Matrizes bidimensionais (arrays 2D) em C
- Modularização de código (separação em `.c`/`.h`)
- Passagem de matrizes como parâmetro de função
- Estruturas de repetição aninhadas (`for` duplo) para varredura da matriz
- Menu interativo controlado por `switch` dentro de um `do-while`

 Como compilar e executar

```bash
gcc main.c predio.c -o predio
./predio
```

 Como usar

Ao rodar o programa, um menu numerado é exibido no terminal. Basta digitar o número da opção desejada e seguir as instruções (informar andar, unidade e/ou quantidade de moradores quando solicitado).

---
Projeto desenvolvido como parte da disciplina de Estrutura de Dados 1(linguagem C) do curso de Análise e Desenvolvimento de Sistemas.
