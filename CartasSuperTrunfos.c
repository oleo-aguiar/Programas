#include <stdio.h>

    // Entrada de Dados

int main() {
    // Primeira Carta

    char Estado1[3];         // Colocar um limite nas Siglas dos Estado ex: SP,RJ, etc...
    char Codigo1[10];        // Ajustar tamanho caso nescessário, palavra Código sem ´ para evitar algum tipo de erro de leitura
    char Cidade1[30];        // Nome da Cidade
    unsigned int Populaçao1;          // População sem ~ para evitar algum tipo de erro de leitura
    int Turismo1;            // Turísmo sem o ´ para evitar algum tipo de erro de leitura
    float Area1;             // Área sem o ´para evitar akgum tipo de erro de leitura
    float PIB1;
    float Densidade1;
    float PIBPERCAPITA1;
    float SUPERPODER1; //Soma a População, área PIB, PIB per capita e densidade populacional invertidade para comparação e número de pontos turísticos

    // Segunda Carta

    char Estado2[3], Codigo2[10], Cidade2[30];
    unsigned int Populaçao2;
    int Turismo2;
    float Area2, PIB2;
    float Densidade2, PIBPERCAPITA2;
    float SUPERPODER2; //Soma a População, área PIB, PIB per capita e densidade populacional invertidade (1 dividido por ela) para comparação e número de pontos turísticos

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
      printf("Código: %s\n", Codigo1);
      printf("Nome da Cidade: %s\n", Cidade1);
      printf("População: %d\n", Populaçao1);
      printf("Área: %.2f km²\n", Area1);
      printf("PIB: %.2f Bilhões de reais\n", PIB1);
      printf("Número de Pontos Turísticos %d\n", Turismo1);
      Densidade1 = (Populaçao1 + Area1) / 2;
      printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
      PIBPERCAPITA1 = (PIB1 + Populaçao1) / 2;
      printf("PIB PER CAPITA: %.2f Reais\n", PIBPERCAPITA1);
      Densidade1 = (1 / Densidade1);
      SUPERPODER1 = (Populaçao1 + Area1 + PIB1 + Densidade1 + Turismo1);
      printf("SUPER PODER: %f \n", SUPERPODER1);


  
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
      printf("Código: %s\n", Codigo2);
      printf("Nome da Cidade: %s\n", Cidade2);
      printf("População: %d\n", Populaçao2);
      printf("Área: %.2f km²\n", Area2);
      printf("PIB: %.2f Bilhões de reais\n", PIB2);
      printf("Número de Pontos Turísticos %d\n", Turismo2);
      Densidade2 = (Populaçao2 + Area2) / 2;
      printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
      PIBPERCAPITA2 = (PIB2 + Populaçao2) / 2;
      printf("PIB PER CAPITA: %.2f Reais\n", PIBPERCAPITA2);
      Densidade2 = (1 / Densidade2);
      SUPERPODER2 = (Populaçao2 + Area2 + PIB2 + Densidade2 + Turismo2);
      printf("SUPER PODER: %f\n", SUPERPODER2);

      //Resultados

      printf(" *** Comparação das Cartas: ***\n");
      printf("População: Carta 1 venceu (%d) \n", Populaçao1 > Populaçao2, (Populaçao1 > Populaçao2));
      printf("Área: Carta 1 venceu (%d) \n", Area1 > Area2, (Area1 > Area2));
      printf("PIB: Carta 1 venceu (%d) \n", PIB1 > PIB2, (PIB1 > PIB2));
      printf("Ponto Turistico: Carta 1 venceu (%d) \n", Turismo1 > Turismo2, (Turismo1 > Turismo2));
      printf("Densidade Populacional: Carta 2 venceu (%d) \n", Densidade1 > Densidade2, (Densidade1 > Densidade2));
      printf("PIB per Capita: Carta 1 venceu (%d) \n", PIBPERCAPITA1 > PIBPERCAPITA2, (PIBPERCAPITA1 > PIBPERCAPITA2));
      printf("Super Poder: Carta 1 venceu (%d) \n", SUPERPODER1 > SUPERPODER2, (SUPERPODER1 > SUPERPODER2));

    return 0;
}
