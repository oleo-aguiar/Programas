#include <stdio.h>

    // Entrada de Dados

int main() {
    // Primeira Carta

    char Estado1[3];         // Colocar um limite nas Siglas dos Estado ex: SP,RJ, etc...
    char Codigo1[10];        // Ajustar tamanho caso nescessário, palavra Código sem ´ para evitar algum tipo de erro de leitura
    char Cidade1[30];        // Nome da Cidade
    int Populaçao1;          // População sem ~ para evitar algum tipo de erro de leitura
    int Turismo1;            // Turísmo sem o ´ para evitar algum tipo de erro de leitura
    float Area1;             // Área sem o ´para evitar akgum tipo de erro de leitura
    float PIB1;
    float Densidade1;
    float PIBPERCAPITA1;

    // Segunda Carta

    char Estado2[3], Codigo2[10], Cidade2[30];
    int Populaçao2, Turismo2;
    float Area2, PIB2;
    float Densidade2, PIBPERCAPITA2;

    // Primeira Carta

    printf("Digite o Estado: \n");
    scanf("%2s", Estado1);  // %2s para garantir que leia apenas 2 caracteres

    printf("Digite o Código:\n");
    scanf("%9s", Codigo1);

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite a População: \n");
    scanf(" %d", &Populaçao1);

    printf("Digite a Área: \n");
    scanf(" %f", &Area1);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB1);

    printf("Digite quantos Pontos de Turísticos tem: \n");
    scanf(" %d", &Turismo1);

      // Saída de dados

      printf(" *** Carta 01: ***\n");
      printf("Estado: %s\n", Estado1);
      printf("Código: %9s\n", Codigo1);
      printf("Nome da Cidade: %s\n", Cidade1);
      printf("População: %d\n", Populaçao1);
      printf("Área: %.2f km²\n", Area1);
      printf("PIB: %.2f Bilhões de reais\n", PIB1);
      printf("Número de Pontos Turísticos %d\n", Turismo1);
      Densidade1 = (Populaçao1 + Area1) / 2;
      printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
      PIBPERCAPITA1 = (PIB1 + Populaçao1) / 2;
      printf("PIB PER CAPITA: %.2f Reais\n", PIBPERCAPITA1);
  
      // Segunda Carta
    
    printf("Digite o Estado: \n");
    scanf("%2s", Estado2);  // %2s para garantir que leia apenas 2 caracteres

    printf("Digite o Código:\n");
    scanf("%9s", Codigo2);

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade2);

    printf("Digite a População: \n");
    scanf(" %d", &Populaçao2);

    printf("Digite a Área: \n");
    scanf(" %f", &Area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB2);

    printf("Digite quantos Pontos de Turísticos tem: \n");
    scanf(" %d", &Turismo2);

      // Saída de dados

      printf(" *** Carta 02: ***\n");
      printf("Carta 02: \n");
      printf("Estado: %s\n", Estado2);
      printf("Código: %9s\n", Codigo2);
      printf("Nome da Cidade: %s\n", Cidade2);
      printf("População: %d\n", Populaçao2);
      printf("Área: %.2f km²\n", Area2);
      printf("PIB: %.2f Bilhões de reais\n", PIB2);
      printf("Número de Pontos Turísticos %d\n", Turismo2);
      Densidade2 = (Populaçao2 + Area2) / 2;
      printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
      PIBPERCAPITA2 = (PIB2 + Populaçao2) / 2;
      printf("PIB PER CAPITA: %.2f Reais\n", PIBPERCAPITA2);

    return 0;
}
