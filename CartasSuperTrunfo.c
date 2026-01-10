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
  float area, pib;

  // Área para entrada de dados da primeira carta

  //uso de fgets pois temos cidades e estados com mais de uma palavra.
  printf("PRIMEIRA CARTA\n");
  printf("Digite o estado da primeira carta: ");
  fgets(estado, 20, stdin);
  //uso do fgets para todas strings para evitar lixo do scanf
  printf("Digite o código da primeira carta: ");
  fgets(codigo, 5, stdin);
  printf("Digite o nome da cidade da primeira carta: ");
  fgets(nome, 20, stdin);
  printf("Digite o população da primeira carta: ");
  scanf("%d", &populacao);
  printf("Digite a área da primeira carta: ");
  scanf("%f", &area);
  printf("Digite o PIB da primeira carta: ");
  scanf("%f", &pib);  
  printf("Digite o número de pontos turísticos da primeira carta: ");
  scanf("%d", &pontosturisticos);

  // -- Removendo o \n das strings
  estado[strcspn(estado, "\n")] = '\0';
  codigo[strcspn(codigo, "\n")] = '\0';
  nome[strcspn(nome, "\n")] = '\0';

  // Área para exibição dos dados da cidade da primeira carta
  
  printf("\nDados da primeira carta cadastrada:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da cidade: %s\n", nome);
  printf("Poulação: %d habitantes\n", populacao);
  printf("Área: %f km quadrados\n", area);
  printf("PIB: R$ %.2f\n", pib);
  printf("Pontos turísticos: %d\n\n", pontosturisticos);
  //uso do getchar para limpar o lixo do scanf
  getchar();

  // Área para entrada de dados da segunda carta

  //uso de fgets pois temos cidades e estados com mais de uma palavra.
  printf("SEGUNDA CARTA\n");
  printf("Digite o estado da segunda carta: ");
  fgets(estado, 20, stdin);
  //uso do fgets para todas strings para evitar lixo do scanf
  printf("Digite o código da segunda carta: ");
  fgets(codigo, 5, stdin);
  printf("Digite o nome da cidade da segunda carta: ");
  fgets(nome, 20, stdin);
  printf("Digite o população da segunda carta: ");
  scanf("%d", &populacao);
  printf("Digite a área da segunda carta: ");
  scanf("%f", &area);
  printf("Digite o PIB da segunda carta: ");
  scanf("%f", &pib);  
  printf("Digite o número de pontos turísticos da segunda carta: ");
  scanf("%d", &pontosturisticos);  

  // -- Removendo o \n das strings
  estado[strcspn(estado, "\n")] = '\0';
  codigo[strcspn(codigo, "\n")] = '\0';
  nome[strcspn(nome, "\n")] = '\0';

  // Área para exibição dos dados da cidade da segunda carta
  
  printf("\nDados da segunda carta cadastrada:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da cidade: %s\n", nome);
  printf("Poulação: %d habitantes\n", populacao);
  printf("Área: %f km quadrados\n", area);
  printf("PIB: R$ %.2f\n", pib);
  printf("Pontos turísticos: %d\n", pontosturisticos);

return 0;
} 
