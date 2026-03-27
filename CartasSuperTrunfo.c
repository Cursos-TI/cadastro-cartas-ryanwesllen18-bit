#include <stdio.h>
// Desafio Super trunfo - Cadastro das cartas
// a função principal int main é o inicial do programa e necessária para a excecução do código do jogo, finalizando com o return 0 para mostrar que o programa finalizou corretamente.
//a entrada de dados é feita para efetuar as perguntas necessarias para o cadastro das cartas com a função scanf e a saída e estrutura printf para mostrar as informações cadastradas e estruta da formula.
int main(){

//declaração da variaveis: populção, área, pib, número de pontos turísticos
// população utiliza int pois é um numero inteiro se refere a pessoas
// área utiliza float pois locais podem ter medidas com casas decimais
//pib utiliza float pois o valor pode ter casa decimais
//numero de pontos turísticos utiliza int pois é um numero inteiro
// entrada e sáida de dados são necessarias para o cadastro das cartas, sempre utilizando informações claras e objetivas
  int populacao;

printf("Digite a população da cidade: ");
scanf("%d", &populacao);
printf("População cadastrada é de: %d habitantes\n", populacao);

float area;

printf("Digite a área da cidade: ");
scanf("%f", &area);

printf("Área cadastrada é de: %.2f km\n", area);


float pib;

printf("Digite o pib da cidade: ");
scanf("%f", &pib);
  
printf("PIB cadastrado é de: %f\n", pib);


int numerodepontosturisticos;

printf("Digite o numero de pontos de pontos turísticos da cidade: ");
scanf("%d", &numerodepontosturisticos);

printf("O número de pontos turísticos cadastrados é de: %d\n", numerodepontosturisticos);

// nessa secão fica dedicada para organização das infomações adicionadas - exibições
printf(" ")

  return 0;
}
