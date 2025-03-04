#include <stdio.h>

int main (){

    char estado[50]; // Nome do Estado
    char codigo[20]; // Código da cidade
    char nome[50]; // Nome da cidade
    int populacao; // Numero de Habitantes
    float area; // Area em m²
    float pib; // Produto interno bruto
    int ponto; // Pontos Turisticos

    printf ("CADASTRO DE CARTAS\n");

    printf ("Estado: \n");
    scanf ("%s", estado);

    printf ("Código: \n");
    scanf ("%s", codigo);

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

    printf ("Estado: %s\n", estado);
    printf ("Código: %s\n", codigo);
    printf ("Cidade: %s\n", nome);
    printf ("População: %f\n", populacao);
    printf ("Área: %fKM²\n", area);
    printf ("PIB: %f\n", pib);
    printf ("Quantidade de pontos turísticos: %d\n", ponto);


    return 0;

}


