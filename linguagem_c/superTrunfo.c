#include <stdio.h>

int main() {

    //armazenar os dados das cartas

    //armazenando  estado da primeira e da segunda carta
    char estado1, estado2;
    //armazenando codigo de tres digitos da primeira e da segunda carta
    char codigo_da_carta1[4], codigo_da_carta2[4];
    //armazenando nome do pais com 20 caracteres da primeira e da segunda carta
    char nome_pais1[20], nome_pais2[20];
    //armazenando area e o pib,  da primeira e da segunda carta como decimais
    float area1, area2, pib1, pib2;
    //armazenando populacao e numero de pontos turisticos da primeira e da segunda carta como numeros inteiros
    int populacao1, populacao2, numero_pontos_turisticos1, numero_pontos_turisticos2;
    //armazenando populacao como unsigned long int para suportar valores maiores
    

    printf("CARTA 1\n");

    printf("Digite o estado (uma letra entre A e H): \n");
    scanf(" %c", &estado1); //recebendo o estado da carta 1 informando pelas letras A a H
    printf("Digite o código da carta - (Composto pela Letra do estado seguida de um número de 01 a 04 ex: A01, B03): \n");
    scanf("%s", codigo_da_carta1);//recebendo o codigo da carta 1 baseado na letra do estado e um numero de 01 a 04
    printf("Digite o nome do pais: \n");
    scanf(" %[^\n]", nome_pais1);//recebendo o nome do pais da carta 1
    printf("Digite a população: \n");
    scanf("%d", &populacao1);//recebendo a populacao da cidade da carta 1, informando numeros inteiros
    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);//recebendo a area da cidade da carta 1, informando as casas decimais
    printf("Digite o PIB (em milhões): \n");
    scanf("%f", &pib1);//recebendo o pib da cidade da carta 1, informando as casas decimais
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_pontos_turisticos1);//recebendo o numero de pontos turisticos da cidade da carta 1, informando numeros inteiros

    float densidade_populacional1 = populacao1 / area1; //calculando a densidade populacional da cidade da carta 1
    float pib_per_capita1 = pib1 / populacao1; //calculando o pib per capita da cidade da carta 1
    
    

    printf("\nCARTA 2\n");
    printf("Digite o estado (uma letra): \n");
    scanf(" %c", &estado2); //recebendo o estado da carta 2 informando pelas letras A a H
    printf("Digite o código da carta - (Composto pela Letra do estado seguida de um número de 01 a 04 ex: A01, B03): \n");
    scanf("%s", codigo_da_carta2);//recebendo o codigo da carta 2 baseado na letra do estado e um numero de 01 a 04
    printf("Digite o nome do pais: \n");
    scanf(" %[^\n]", nome_pais2);//recebendo o nome do pais da carta 2
    printf("Digite a população: \n");
    scanf("%d", &populacao2);//recebendo a populacao da cidade da carta 2, informando numeros inteiros
    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);//recebendo a area da cidade da carta 2, informando as casas decimais
    printf("Digite o PIB (em milhões): \n");
    scanf("%f", &pib2);//recebendo o pib da cidade da carta 2, informando as casas decimais
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_pontos_turisticos2);//recebendo o numero de pontos turisticos da cidade da carta 2, informando numeros inteiros

    float densidade_populacional2 = populacao2 / area2; //calculando a densidade populacional da cidade da carta 2
    float pib_per_capita2 = pib2 / populacao2; //calculando o pib per capita da cidade da carta 2
    
    

    //exibir os dados das cartas informadas
    //exibindo os dados da carta 1
    printf("----------------------\n");
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_pais1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f milhões\n", pib_per_capita1);
    

    printf("----------------------\n");

    //exibindo os dados da carta 2
    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_pais2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f milhões\n", pib_per_capita2);
    
    printf("----------------------\n");

    int opcao1, opcao2;

    printf("\n **************************\n");
    //menu onde o usuario escolha qual atributo ele quer comparar
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - Número de Pontos Turísticos\n");

    printf("********************************\n");

    printf("Digite sua primeira opção: ");
    scanf("%d", &opcao1);// aqui o usuario a escolha do primeiro atributo de acordo com o menu acima

    //menu da escola da segundo atributo
    printf("Escolha o segundo atributo para comparar:\n");
    for (int i = 1; i <= 5; i++){
        if (i != opcao1){
            switch (i)
            {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 5: printf("4 - Densidade Populacional\n"); break;
                case 6: printf("5 - Número de Pontos Turísticos\n"); break;
            }
        }
    }

    printf("********************************\n");

    printf("Digite sua segunda opção: ");
    scanf("%d", &opcao2);// aqui o usuario informa sua segunda opcao de atributo de acordo com o menu acima

    char nome_atributo1[50], nome_atributo2[50]; //armazena nome atributo escolhido
    float valor_atributo1_carta1, valor_atributo1_carta2;//variavel armazena valor do atributo 1 da carta 1 e carta 2
    float valor_atributo2_carta1, valor_atributo2_carta2;//variavel armazena valor do atributo 2 da carta 1 e carta 2


    printf("\n**** RESULTADO *****\n");

    switch (opcao1) {
        case 1: valor_atributo1_carta1 = populacao1; valor_atributo1_carta2 = populacao2; sprintf(nome_atributo1, "População"); break;
        case 2: valor_atributo1_carta1 = area1; valor_atributo1_carta2 = area2; sprintf(nome_atributo1, "Área (km²)"); break;
        case 3: valor_atributo1_carta1 = pib1; valor_atributo1_carta2 = pib2; sprintf(nome_atributo1, "PIB (milhões)"); break;
        case 4: valor_atributo1_carta1 = densidade_populacional1; valor_atributo1_carta2 = densidade_populacional2; sprintf(nome_atributo1, "Densidade Populacional"); break;
        case 5: valor_atributo1_carta1 = numero_pontos_turisticos1; valor_atributo1_carta2 = numero_pontos_turisticos2; sprintf(nome_atributo1, "Pontos Turísticos"); break;
        
        default: printf("Opção inválida!\n"); 
        return 1;
    }

    switch (opcao2) {
        case 1: valor_atributo2_carta1 = populacao1; valor_atributo2_carta2 = populacao2; sprintf(nome_atributo2, "População"); break;
        case 2: valor_atributo2_carta1 = area1; valor_atributo2_carta2 = area2; sprintf(nome_atributo2, "Área (km²)"); break;
        case 3: valor_atributo2_carta1 = pib1; valor_atributo2_carta2 = pib2; sprintf(nome_atributo2, "PIB (milhões)"); break;
        case 4: valor_atributo2_carta1 = densidade_populacional1; valor_atributo2_carta2 = densidade_populacional2; sprintf(nome_atributo2, "Densidade Populacional");break;
        case 5: valor_atributo2_carta1 = numero_pontos_turisticos1; valor_atributo2_carta2 = numero_pontos_turisticos2; sprintf(nome_atributo2, "Pontos Turísticos"); break;
        
        default: printf("Opção inválida!\n"); 
        return 1;
    }

    int pontos_carta1, pontos_carta2;//armazendar os pontos das cartas

    if (opcao1 == 4) { // comparando qual tem a menor densidade populacional optando pela opcao 1
        if (valor_atributo1_carta1 < valor_atributo1_carta2) pontos_carta1++;
        else if (valor_atributo1_carta2 < valor_atributo1_carta1) pontos_carta2++;
    } else {
        if (valor_atributo1_carta1 > valor_atributo1_carta2) pontos_carta1++;
        else if (valor_atributo1_carta2 > valor_atributo1_carta1) pontos_carta2++;
    }

    if (opcao2 == 4) { // comparando qual tem a menor densidade populacional optando pela opcao 2
        if (valor_atributo2_carta1 < valor_atributo2_carta2) pontos_carta1++;
        else if (valor_atributo2_carta2 < valor_atributo2_carta1) pontos_carta2++;
    } else {
        if (valor_atributo2_carta1 > valor_atributo2_carta2) pontos_carta1++;
        else if (valor_atributo2_carta2 > valor_atributo2_carta1) pontos_carta2++;
    }

    //soma dos atributos
    float total_atributo_carta1 = valor_atributo1_carta1 + valor_atributo2_carta1;
    float total_atributo_carta2 = valor_atributo1_carta2 + valor_atributo2_carta2;

    // exibindo os resultados
    printf("\n RESULTADO FINAL\n");
    printf("Carta 1: %s\n", nome_pais1);
    printf("Carta 2: %s\n", nome_pais2);
    printf("\n");
    //exibindo valores do primeiro atributo selecionado
    printf("Atributo 1: %s\n", nome_atributo1);
    printf("%s: %.2f\n", nome_pais1, valor_atributo1_carta1);
    printf("%s: %.2f\n\n", nome_pais2, valor_atributo1_carta2);
     printf("\n");
     //exibindo valores do segundo atribudo selecionaldo
    printf("Atributo 2: %s\n", nome_atributo2);
    printf("%s: %.2f\n", nome_pais1, valor_atributo2_carta1);
    printf("%s: %.2f\n", nome_pais2, valor_atributo2_carta2);
    printf("\n");
    //exibindo os totais dos atributos 1 e 2 
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nome_pais1, total_atributo_carta1);
    printf("%s: %.2f\n", nome_pais2, total_atributo_carta2);
    
    //comparando qual pais tem a maior pontuacao
    //verifinando quem e o vencedor de acordo com quem tiver a maior pontuacao
    if (total_atributo_carta1 > total_atributo_carta2)
        printf("Vencedora: %s\n", nome_pais1);
    else if (total_atributo_carta1 < total_atributo_carta2)
        printf("Vencedora: %s\n", nome_pais2);
    else
        printf(" Empate!\n");

    printf("============================\n\n");

    return 0;
}
