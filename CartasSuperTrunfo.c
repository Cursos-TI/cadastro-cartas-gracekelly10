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
  unsigned long int populacao1;
  float area1;
  float pib1;
  int numPontosTuristicos1;
  float densidadePopulacional1;
  double PIBperCapita1;
  float superPoder1;

  // Dados Carta 2
  char estado2[40];
  char codigo2[40];
  char nomeCidade2[40];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int numPontosTuristicos2;
  float densidadePopulacional2;
  double PIBperCapita2;
  float superPoder2;

  // Área para entrada de dados

  // Dados Carta 1
  printf("Digite o Estado da Carta 1\n");
  scanf("%s", estado1);
  printf("Digite o Codigo da Carta 1\n");
  scanf("%s", codigo1);
  printf("Digite o nome da Cidade da Carta 1\n");
  scanf(" %[^\n]", nomeCidade1);
  printf("Digite a população da Carta 1\n");
  scanf("%lu", &populacao1);
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
  scanf("%lu", &populacao2);
  printf("Digite a área da Carta 2\n");
  scanf("%f", &area2);
  printf("Digite o o PIB da Carta 2\n");
  scanf("%f", &pib2);
  printf("Digite o número de Pontos Turísticos da Carta 2\n");
  scanf("%d", &numPontosTuristicos2);

  // Área para calcular variaveis

  // Dados Carta 1
  densidadePopulacional1 = populacao1/area1;
  PIBperCapita1 = (pib1*1000000000.0)/populacao1;
  superPoder1 = (float)populacao1 + area1 + pib1 + (float)numPontosTuristicos1 + PIBperCapita1 + (1.0/densidadePopulacional1);

  // Dados Carta 2
  densidadePopulacional2 = populacao2/area2;
  PIBperCapita2 = (pib2*1000000000.0)/populacao2;
  superPoder2 = (float)populacao2 + area2 + pib2 + (float)numPontosTuristicos2 + PIBperCapita2 + (1.0/densidadePopulacional2);



  // Área para exibição dos dados da cidade

  // Dados Carta 1
  printf("Carta 1\n");
  printf("Estado: %s\n",estado1);
  printf("Código: %s\n",codigo1);
  printf("Nome da Cidade: %s\n",nomeCidade1);
  printf("População: %lu\n",populacao1);
  printf("Área: %.2f km²\n",area1);
  printf("PIB: %.2f bilhões de reais\n",pib1);
  printf("Número de Pontos Turísticos: %d\n",numPontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n",densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n",PIBperCapita1);
  printf("Super poder: %.2f reais\n",superPoder1);


  // Dados Carta 2
  printf("Carta 2\n");
  printf("Estado: %s\n",estado2);
  printf("Código: %s\n",codigo2);
  printf("Nome da Cidade: %s\n",nomeCidade2);
  printf("População: %lu\n",populacao2);
  printf("Área: %.2f km²\n",area2);
  printf("PIB: %.2f bilhões de reais\n",pib2);
  printf("Número de Pontos Turísticos: %d\n",numPontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n",densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n",PIBperCapita2);
  printf("Super poder: %.2f reais\n",superPoder2);

  // Comparar Cartas

  printf("Comparação de Cartas:\n");
  printf("População: Carta %d venceu\n", (populacao1>populacao2)? 1:2);
  printf("Área: Carta %d venceu\n", (area1>area2)? 1:2);
  printf("PIB: Carta %d venceu\n", (pib1>pib2)? 1:2);
  printf("Número de Pontos Turísticos: Carta %d venceu\n", (numPontosTuristicos1>numPontosTuristicos2)? 1:2);
  printf("Densidade populacional: Carta %d venceu\n", (densidadePopulacional1<densidadePopulacional2)? 1:2);
  printf("PIB per Capita: Carta %d venceu\n", (PIBperCapita1>PIBperCapita2)? 1:2);
  printf("Super poder: Carta %d venceu\n", (superPoder1>superPoder2)? 1:2);

return 0;
} 
