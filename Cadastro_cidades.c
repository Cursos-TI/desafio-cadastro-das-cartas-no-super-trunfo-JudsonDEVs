#include <stdio.h>

int main (){

    char estadoc1[50], estadoc2[50]; // Nome do Estado
    char codigoc1[20], codigoc2[20]; // Código da cidade
    char nomec1[50], nomec2[50]; // Nome da cidade
    int populacaoc1, populacaoc2; // Numero de Habitantes
    float areac1, areac2; // Area em m²
    float pibc1, pibc2; // Produto interno bruto
    int pontoc1, pontoc2; // Pontos Turisticos

    printf ("CADASTRE A CARTA 1\n");

    printf ("Estado: \n");
    scanf ("%s", estadoc1);

    printf ("Código: \n");
    scanf ("%s", codigoc1);

    printf ("Cidade: \n");
    scanf ("%s", nomec1);

    printf ("População: \n");
    scanf ("%d", &populacaoc1);

    printf ("Area: \n");
    scanf ("%f", &areac1);

    printf ("PIB: \n");
    scanf ("%f", &pibc1);

    printf ("Quantidade de Pontos Turísticos: \n");
    scanf ("%d", &pontoc1);

    printf ("Dados Cadastrados\n");

    printf ("Estado: %s\n", estadoc1);
    printf ("Código: %s\n", codigoc1);
    printf ("Cidade: %s\n", nomec1);
    printf ("População: %d\n", populacaoc1);
    printf ("Área: %fKM²\n", areac1);
    printf ("PIB: %f\n", pibc1);
    printf ("Quantidade de pontos turísticos: %d\n", pontoc1);

    printf ("CADASTRE A CARTA 2\n");

    printf ("Estado: \n");
    scanf ("%s", estadoc2);

    printf ("Código: \n");
    scanf ("%s", codigoc2);

    printf ("Cidade: \n");
    scanf ("%s", nomec2);

    printf ("População: \n");
    scanf ("%d", &populacaoc2);

    printf ("Area: \n");
    scanf ("%f", &areac2);

    printf ("PIB: \n");
    scanf ("%f", &pibc2);

    printf ("Quantidade de Pontos Turísticos: \n");
    scanf ("%d", &pontoc2);

    printf ("Dados Cadastrados\n");

    printf ("Estado: %s\n", estadoc2);
    printf ("Código: %s\n", codigoc2);
    printf ("Cidade: %s\n", nomec2);
    printf ("População: %d\n", populacaoc2);
    printf ("Área: %fKM²\n", areac2);
    printf ("PIB: %f\n", pibc2);
    printf ("Quantidade de pontos turísticos: %d\n", pontoc2);

    return 0;

}


