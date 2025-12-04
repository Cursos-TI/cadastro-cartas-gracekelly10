#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Dados Carta 1
  char estado1[40];
  char codigo1[40];
  char nomeCidade1[40];
  int populacao1;
  float area1;
  float pib1;
  int numPontosTuristicos1;

  // Dados Carta 2
  char estado2[40];
  char codigo2[40];
  char nomeCidade2[40];
  int populacao2;
  float area2;
  float pib2;
  int numPontosTuristicos2;

  // Área para entrada de dados

  // Dados Carta 1
  printf("Digite o Estado da Carta 1\n");
  scanf("%s", estado1);
  printf("Digite o Codigo da Carta 1\n");
  scanf("%s", codigo1);
  printf("Digite o nome da Cidade da Carta 1\n");
  scanf(" %[^\n]", nomeCidade1);
  printf("Digite a população da Carta 1\n");
  scanf("%d", &populacao1);
  printf("Digite a área da Carta 1\n");
  scanf("%f", &area1);
  printf("Digite o o PIB da Carta 1\n");
  scanf("%f", &pib1);
  printf("Digite o número de Pontos Turísticos da Carta 1\n");
  scanf("%d", &numPontosTuristicos1);

  // Dados Carta 2
  printf("Digite o Estado da Carta 2\n");
  scanf("%s", estado2);
  printf("Digite o Codigo da Carta 2\n");
  scanf("%s", codigo2);
  printf("Digite o nome da Cidade da Carta 2\n");
  scanf(" %[^\n]", nomeCidade2);
  printf("Digite a população da Carta 2\n");
  scanf("%d", &populacao2);
  printf("Digite a área da Carta 2\n");
  scanf("%f", &area2);
  printf("Digite o o PIB da Carta 2\n");
  scanf("%f", &pib2);
  printf("Digite o número de Pontos Turísticos da Carta 2\n");
  scanf("%d", &numPontosTuristicos2);

  // Área para exibição dos dados da cidade

  // Dados Carta 1
  printf("Carta 1\n");
  printf("Estado: %s\n",estado1);
  printf("Código: %s\n",codigo1);
  printf("Nome da Cidade: %s\n",nomeCidade1);
  printf("População: %d\n",populacao1);
  printf("Área: %.2f km²\n",area1);
  printf("PIB: %.2f bilhões de reais\n",pib1);
  printf("Número de Pontos Turísticos: %d\n",numPontosTuristicos1);

  // Dados Carta 2
  printf("Carta 2\n");
  printf("Estado: %s\n",estado2);
  printf("Código: %s\n",codigo2);
  printf("Nome da Cidade: %s\n",nomeCidade2);
  printf("População: %d\n",populacao2);
  printf("Área: %.2f km²\n",area2);
  printf("PIB: %.2f bilhões de reais\n",pib2);
  printf("Número de Pontos Turísticos: %d\n",numPontosTuristicos2);

return 0;
} 
