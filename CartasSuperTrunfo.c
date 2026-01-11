#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
//Aluno: Edgar Nicolau Fardin - CPF: 222.405.658-37

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado[20], codigo[5], nome[20];
  int populacao, pontosturisticos;
  float area, pib, densidade, pibpercapita;

  // Área para entrada de dados da primeira carta

  printf("PRIMEIRA CARTA\n");
  printf("Digite o estado da primeira carta: ");
  scanf("%s", estado);
  printf("Digite o código da primeira carta: ");
  scanf("%s", codigo);
  printf("Digite o nome da cidade da primeira carta: ");
  scanf("%s", nome);
  printf("Digite o população da primeira carta: ");
  scanf("%d", &populacao);
  printf("Digite a área da primeira carta: ");
  scanf("%f", &area);
  printf("Digite o PIB da primeira carta: ");
  scanf("%f", &pib);  
  printf("Digite o número de pontos turísticos da primeira carta: ");
  scanf("%d", &pontosturisticos);

    //Removendo o \n das strings
  estado[strcspn(estado, "\n")] = '\0';
  codigo[strcspn(codigo, "\n")] = '\0';
  nome[strcspn(nome, "\n")] = '\0';

    // Calcupo de Desnidade e PIB per capita
  densidade = (float) populacao / area;
  pibpercapita = (float) pib / populacao;
  

  // Área para exibição dos dados da cidade da primeira carta
  
  printf("\nDados da primeira carta cadastrada:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da cidade: %s\n", nome);
  printf("Poulação: %d habitantes\n", populacao);
  printf("Área: %.2f km quadrados\n", area);
  printf("PIB: R$ %.2f\n", pib);
  printf("Pontos turísticos: %d\n", pontosturisticos);
  printf("Densidade Populacional: %.2f\n", densidade);
  printf("PIB per Capita: R$ %.2f\n\n", pibpercapita);

  // Área para entrada de dados da segunda carta

  printf("SEGUNDA CARTA\n");
  printf("Digite o estado da primeira carta: ");
  scanf("%s", estado);
  printf("Digite o código da primeira carta: ");
  scanf("%s", codigo);
  printf("Digite o nome da cidade da primeira carta: ");
  scanf("%s", nome);
  printf("Digite o população da segunda carta: ");
  scanf("%d", &populacao);
  printf("Digite a área da segunda carta: ");
  scanf("%f", &area);
  printf("Digite o PIB da segunda carta: ");
  scanf("%f", &pib);  
  printf("Digite o número de pontos turísticos da segunda carta: ");
  scanf("%d", &pontosturisticos);  

    //Removendo o \n das strings
  estado[strcspn(estado, "\n")] = '\0';
  codigo[strcspn(codigo, "\n")] = '\0';
  nome[strcspn(nome, "\n")] = '\0';

    // Calcupo de Desnidade e PIB per capita
  densidade = (float) populacao / area;
  pibpercapita = (float) pib / populacao;

  // Área para exibição dos dados da cidade da segunda carta
  
  printf("\nDados da segunda carta cadastrada:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da cidade: %s\n", nome);
  printf("Poulação: %d habitantes\n", populacao);
  printf("Área: %.2f km quadrados\n", area);
  printf("PIB: R$ %.2f\n", pib);
  printf("Pontos turísticos: %d\n", pontosturisticos);
  printf("Densidade Populacional: %.2f\n", densidade);
  printf("PIB per Capita: R$ %.2f\n", pibpercapita);

return 0;
} 
