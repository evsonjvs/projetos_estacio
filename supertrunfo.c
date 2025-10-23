#include <stdio.h>

int main() {

    //armazenar os dados das cartas

    //armazenando  estado da primeira e da segunda carta
    char estado1, estado2;
    //armazenando codigo de tres digitos da primeira e da segunda carta
    char codigo_da_carta1[4], codigo_da_carta2[4];
    //armazenando nome da cidade com 20 caracteres da primeira e da segunda carta
    char nome_da_cidade1[20], nome_da_cidade2[20];
    //armazenando area e o pib,  da primeira e da segunda carta como decimais
    float area1, area2, pib1, pib2;
    //armazenando populacao e numero de pontos turisticos da primeira e da segunda carta como numeros inteiros
    int populacao1, populacao2, numero_pontos_turisticos1, numero_pontos_turisticos2;

    printf("CARTA 1\n");

    printf("Digite o estado (uma letra entre A e H): \n");
    scanf(" %c", &estado1); //recebendo o estado da carta 1 informando pelas letras A a H
    printf("Digite o código da carta - (Composto pela Letra do estado seguida de um número de 01 a 04 ex: A01, B03): \n");
    scanf("%s", codigo_da_carta1);//recebendo o codigo da carta 1 baseado na letra do estado e um numero de 01 a 04
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade1);//recebendo o nome da cidade da carta 1
    printf("Digite a população: \n");
    scanf("%d", &populacao1);//recebendo a populacao da cidade da carta 1, informando numeros inteiros
    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);//recebendo a area da cidade da carta 1, informando as casas decimais
    printf("Digite o PIB (em milhões): \n");
    scanf("%f", &pib1);//recebendo o pib da cidade da carta 1, informando as casas decimais
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_pontos_turisticos1);//recebendo o numero de pontos turisticos da cidade da carta 1, informando numeros inteiros

    printf("\nCARTA 2\n");
    printf("Digite o estado (uma letra): \n");
    scanf(" %c", &estado2); //recebendo o estado da carta 2 informando pelas letras A a H
    printf("Digite o código da carta - (Composto pela Letra do estado seguida de um número de 01 a 04 ex: A01, B03): \n");
    scanf("%s", codigo_da_carta2);//recebendo o codigo da carta 2 baseado na letra do estado e um numero de 01 a 04
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade2);//recebendo o nome da cidade da carta 2
    printf("Digite a população: \n");
    scanf("%d", &populacao2);//recebendo a populacao da cidade da carta 2, informando numeros inteiros
    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);//recebendo a area da cidade da carta 2, informando as casas decimais
    printf("Digite o PIB (em milhões): \n");
    scanf("%f", &pib2);//recebendo o pib da cidade da carta 2, informando as casas decimais
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_pontos_turisticos2);//recebendo o numero de pontos turisticos da cidade da carta 2, informando numeros inteiros

    //exibir os dados das cartas informadas
    //exibindo os dados da carta 1
    printf("----------------------\n");
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos1);

    printf("----------------------\n");
    //exibindo os dados da carta 2
    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos2);

    printf("----------------------\n");

    return 0;
}