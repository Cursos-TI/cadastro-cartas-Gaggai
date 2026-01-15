#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
//Aluno: Edgar Nicolau Fardin - CPF: 222.405.658-37

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    //carta 1
  char estado1[30], codigo1[5], nome1[30];
  unsigned long int populacao1;
  int pontosturisticos1;
  float area1, pib1, densidade1, pibpercapita1, super1;

  //carta 2
  char estado2[30], codigo2[5], nome2[30];
  unsigned long int populacao2;
  int pontosturisticos2;
  float area2, pib2, densidade2, pibpercapita2, super2;

   //variaveis do sistema
  int opacao;

  // Área para entrada de dados da primeira carta

  printf("*** JOGO SUPER TRUNFO ***\n");
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

  // Área para o menu
  printf("*** JOGO SUPER TRUNFO ***\n\n");
  printf("Escolha uma opção de comparação:\n");  
  printf("1. PIB\n");
  printf("2. Área\n");
  printf("3. População\n");
  printf("4. Super Poder\n");
  printf("5. PIB per Capita\n");
  printf("6. Pontos Turisticos\n");
  printf("7. Densidade Populacional\n");

  scanf("%d", &opacao); 

  switch (opacao)
  {
  case 1:
    printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, pib2);

    if(pib1 > pib2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if(pib1 < pib2){
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else{
        printf("Houve um empate\n");
    }
    break;  
  case 2:
    printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, area2);

    if(area1 > area2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if(area1 < area2){
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else{
        printf("Houve um empate\n");
    }
    break;
  case 3:
    printf("Carta 1 - %s (%s): %lu \n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu \n", nome2, estado2, populacao2);

    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if(populacao1 < populacao2){
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else{
        printf("Houve um empate\n");
    }
    break;
  case 4:
    printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, super1);
    printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, super2);

    if(super1 > super2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if(super1 < super2){
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else{
        printf("Houve um empate\n");
    }
    break;
  case 5:
    printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, pibpercapita1);
    printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, pibpercapita2);

    if(pibpercapita1 > pibpercapita2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if(pibpercapita1 < pibpercapita2){
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else{
        printf("Houve um empate\n");
    }
    break;
  case 6:
    printf("Carta 1 - %s (%s): %d \n", nome1, estado1, pontosturisticos1);
    printf("Carta 2 - %s (%s): %d \n", nome2, estado2, pontosturisticos2);

    if(pontosturisticos1 > pontosturisticos2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if(pontosturisticos1 < pontosturisticos2){
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else{
        printf("Houve um empate\n");
    }
    break;  
  case 7:
    printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, densidade2);

    if(1 / densidade1 > 1 / densidade2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if(1 / densidade1 < 1 /densidade2){
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else{
        printf("Houve um empate\n");
    }
    break;  
  default:
    printf("Opção inválida\n");
    break;
  }
  
  return 0;
}