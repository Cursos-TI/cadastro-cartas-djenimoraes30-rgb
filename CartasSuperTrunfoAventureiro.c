#include <stdio.h>

int main(){
    int População1, PontosTuristicos1, População2, PontosTuristicos2; //apenas um tipo de variavel para todos os pontos, deixando mais facil a leitura
    char Estado1[20], Codigo1[5], Nome1[20], Estado2[20], Codigo2[5], Nome2[20]; //Todos os nomes significativos para melhor coompreensão
    float Area1, PIB1, Area2, PIB2, DenPop1, PIB1pc, DenPop2, PIB2pc;

    printf("Nomeie o estado: \n");
    scanf(" %s", Estado1);

    printf("Código da carta: \n"); 
    scanf(" %s", Codigo1);

    printf("Nome da cidade: \n");
    scanf(" %s", Nome1);

    printf("Qual a população: \n");
    scanf("%d", &População1);

    printf("Qual a área: \n");
    scanf("%f", &Area1);

    printf("Qual o PIB: \n");
    scanf("%f", &PIB1);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &PontosTuristicos1);

    DenPop1 = ( População1 ) / ( Area1 ); //adiciona a divisão que vai usar os dados de população1 e area1, para densidade populacional e aplica a mesma ideia para o PIB per capita
    PIB1pc = ( PIB1 ) / ( População1);

    printf("Carta Um: \n"); 
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d habitantes\nÁrea: %.2fkm²\nPIB: %.2f reais\nPontos Turisticos: %d\nDensidade Populacional: %.3fhab/km²\nPIB per Capita: %.3f reais\n", Estado1, Codigo1, Nome1, População1, Area1, PIB1, PontosTuristicos1, DenPop1, PIB1pc);

    printf("Nomeie o estado: \n");
    scanf(" %s", Estado2);

    printf("Código da carta: \n");
    scanf(" %s", Codigo2);

    printf("Nome da cidade: \n");
    scanf(" %s", Nome2);

    printf("Qual a população: \n");
    scanf("%d", &População2);

    printf("Qual a área: \n");
    scanf("%f", &Area2);

    printf("Qual o PIB: \n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &PontosTuristicos2);

    DenPop2 = ( População2 ) / ( Area2 );
    PIB2pc = ( PIB2 ) / ( População2);

    printf("Carta Dois: \n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d habitantes\nÁrea: %.2fkm²\nPIB: %.2f reais\nPontos Turisticos: %d\nDensidade Populacional: %.3fhab/km²\nPIB per Capita: %.3f reais\n", Estado2, Codigo2, Nome2, População2, Area2, PIB2, PontosTuristicos2, DenPop2, PIB2pc);

    return 0;
}