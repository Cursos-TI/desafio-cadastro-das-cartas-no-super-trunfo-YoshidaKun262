#include <stdio.h>


int main() {

   //Variáveis primeira carta.
    char Estado[12];
    //Nome do estado.

    char Codigo[5];
    //Código das cartas.

    char Cidade[12];
    //Nome da cidade.

    int Populacao;
    //Numero de habitantes.

    float Area;
    //Área em km².

    float PIB;
    //Valor do PIB.

    int Turismo;
    //Número de pontos turísticos.
   //Fim das variáveis da primeira carta.


   //Variáveis segunda carta.
    char Estado2[12];

    char Codigo2[5];

    char Cidade2[12];

    int Populacao2;

    float Area2;

    float PIB2;

    int Turismo2;
   //Fim das variáveis da segunta carta.

    //Leitura de informações da primeira carta.
    printf("Digite o nome do estado: \n");
    scanf("%s", &Estado);

    printf("Código da carta: \n");
    scanf("%s", &Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite o número de habitantes: \n");
    scanf("%d", &Populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &Area);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turismo);
    //Fim da leitura de informações da primeira carta.

    //Impressão das informações da primeira carta.
    printf("O nome da estado: %s - Código da carta: %s\n", Estado, Codigo);
    printf("O nome da cidade: %s\n", Cidade);
    printf("O número de habitantes: %d\n", Populacao);
    printf("A área é: %.3f\n", Area);
    printf("O PIB é: %.1f\n", PIB);
    printf("O número de pontos turísticos: %d\n", Turismo);
    //Informações da primeira carta imprimidas.

    //Leitura de informações da segunda carta.
    printf("Digite o nome do estado da segunda carta: \n");
    scanf("%s", &Estado2);

    printf("Código da carta: \n");
    scanf("%s", &Codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade2);

    printf("Digite o número de habitantes: \n");
    scanf("%d", &Populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &Area2);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turismo2);
    //Fim da leitura de informações da segunda carta.

    //Impressão das informações da segunda carta.
    printf("O nome da estado: %s - Código da carta: %s\n", Estado2, Codigo2);
    printf("O nome da cidade: %s\n", Cidade2);
    printf("O número de habitantes: %d\n", Populacao2);
    printf("A área é: %.3f\n", Area2);
    printf("O PIB é: %.1f\n", PIB2);
    printf("O número de pontos turísticos: %d\n", Turismo2);
    //Informações da segunda carta imprimidas.
    
    return 0;
}
