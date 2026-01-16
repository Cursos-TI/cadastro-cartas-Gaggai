#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
//Aluno: Edgar Nicolau Fardin - CPF: 222.405.658-37

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    //carta 1
  char estado1[30];
  char codigo1[5];
  char nome1[30];
  unsigned long int populacao1;
  int pontosturisticos1;
  float area1; 
  float pib1;
  float densidade1;
  float pibpercapita1;
  float super1;

  //carta 2
  char estado2[30];
  char codigo2[5];
  char nome2[30];
  unsigned long int populacao2;
  int pontosturisticos2;
  float area2;
  float pib2;
  float densidade2;
  float pibpercapita2;
  float super2;

  // Área para entrada de dados da primeira carta

  printf("PRIMEIRA CARTA\n");
  printf("Digite o estado da primeira carta: ");
  scanf("%s", estado1);
  printf("Digite o código da primeira carta: ");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade da primeira carta: ");
  scanf("%s", nome1);
  printf("Digite o população da primeira carta: ");
  scanf("%lu", &populacao1);
  printf("Digite a área da primeira carta: ");
  scanf("%f", &area1);
  printf("Digite o PIB da primeira carta: ");
  scanf("%f", &pib1);  
  printf("Digite o número de pontos turísticos da primeira carta: ");
  scanf("%d", &pontosturisticos1);

    //Removendo o \n das strings
  estado1[strcspn(estado1, "\n")] = '\0';
  codigo1[strcspn(codigo1, "\n")] = '\0';
  nome1[strcspn(nome1, "\n")] = '\0';

    // Calculo de Densidade e PIB per capita
  densidade1 = (float)populacao1 / area1;
  pibpercapita1 =  pib1 / (float)populacao1;

    // Calculo do Super
  super1 = populacao1 + area1 + pib1 + pibpercapita1 + pontosturisticos1 + (1 / densidade1);

  // Área para exibição dos dados da cidade da primeira carta

  printf("\nDados da primeira carta cadastrada:\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", nome1);
  printf("População: %lu habitantes\n", populacao1);
  printf("Área: %.2f km quadrados\n", area1);
  printf("PIB: R$ %.2f\n", pib1);
  printf("Pontos turísticos: %d\n", pontosturisticos1);
  printf("Densidade Populacional: %.2f\n", densidade1);
  printf("PIB per Capita: R$ %.2f\n", pibpercapita1);
  printf("Super Poder: %.2f\n\n", super1);

  // Área para entrada de dados da segunda carta

  printf("SEGUNDA CARTA\n");
  printf("Digite o estado da segunda carta: ");
  scanf("%s", estado2);
  printf("Digite o código da segunda carta: ");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade da segunda carta: ");
  scanf("%s", nome2);
  printf("Digite o população da segunda carta: ");
  scanf("%lu", &populacao2);
  printf("Digite a área da segunda carta: ");
  scanf("%f", &area2);
  printf("Digite o PIB da segunda carta: ");
  scanf("%f", &pib2);  
  printf("Digite o número de pontos turísticos da segunda carta: ");
  scanf("%d", &pontosturisticos2);  

    //Removendo o \n das strings
  estado2[strcspn(estado2, "\n")] = '\0';
  codigo2[strcspn(codigo2, "\n")] = '\0';
  nome2[strcspn(nome2, "\n")] = '\0';

    // Calculo de Densidade e PIB per capita
  densidade2 = (float)populacao2 / area2;
  pibpercapita2 =  pib2 / (float)populacao2;

  // Calculo do Super
  super2 = populacao2 + area2 + pib2 + pibpercapita2 + pontosturisticos2 + (1 / densidade2);

  // Área para exibição dos dados da cidade da segunda carta

  printf("\nDados da segunda carta cadastrada:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nome2);
  printf("População: %lu habitantes\n", populacao2);
  printf("Área: %.2f km quadrados\n", area2);
  printf("PIB: R$ %.2f\n", pib2);
  printf("Pontos turísticos: %d\n", pontosturisticos2);
  printf("Densidade Populacional: %.2f\n", densidade2);
  printf("PIB per Capita: R$ %.2f\n", pibpercapita2);
  printf("Super Poder: %.2f\n\n", super2);

  // Área para exibição da comatação entre as cartas
  printf("COMPARAÇÃO DAS CARTAS:\n");
  printf("População: Carta 1 venceu: %lu\n", populacao1 > populacao2);
  printf("Área: Carta 1 venceu: %d\n", area1 > area2);
  printf("PIB: Carta 1 venceu: %d\n", pib1 > pib2);
  printf("Pontos Turísticos: Carta 1 venceu: %d\n", pontosturisticos1 > pontosturisticos2);
  printf("Densidade Populacional: Carta 1 venceu: %d\n", densidade1 > densidade2);
  printf("PIB per Capita: Carta 1 venceu: %d\n", pibpercapita1 > pibpercapita2);
  printf("Super Poder: Carta 1 venceu: %d\n\n", super1 > super2);

return 0;
}