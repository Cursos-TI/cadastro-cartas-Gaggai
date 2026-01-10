#include <stdio.h>

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


  // Área para exibição dos dados da cidade da primeira carta
  
  printf("Dados da primeira carta cadastrada:\n");
  printf("Estado: %s", estado);
  printf("Código: %s", codigo);
  printf("Nome da cidade: %s" nome);
  printf("Poulação: %d", populacao);
  printf("Área: %f", area);
  printf("PIB: %f", pib);
  printf("Pontos turísticos: %d", pontosturisticos);

return 0;
} 
