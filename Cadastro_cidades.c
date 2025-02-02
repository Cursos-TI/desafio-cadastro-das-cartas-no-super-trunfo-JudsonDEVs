#include <stdio.h>

int main (){

    char cdc[20]; // Código da cidade
    char nome[50]; // Nome da cidade
    float populacao, area, pib; // Número de População, Área e PIB
    int ponto; // Pontos Turisticos

    printf ("CADASTRO DE CARTAS\n");

    printf ("Código: \n");
    scanf ("%s", cdc);

    printf ("Cidade: \n");
    scanf ("%s", nome);

    printf ("População: \n");
    scanf ("%f", &populacao);

    printf ("Area: \n");
    scanf ("%f", &area);

    printf ("PIB: \n");
    scanf ("%f", &pib);

    printf ("Quantidade de Pontos Turísticos: \n");
    scanf ("%d", &ponto);

    printf ("Dados Cadastrados\n");
    printf ("Código: %s\n", cdc);
    printf ("Cidade: %s\n", nome);
    printf ("População: %.3f\n", populacao);
    printf ("Área: %.3fKM²\n", area);
    printf ("PIB: %.3f\n", pib);
    printf ("Quantidade de pontos turísticos: %d\n", ponto);


    return 0;

}
