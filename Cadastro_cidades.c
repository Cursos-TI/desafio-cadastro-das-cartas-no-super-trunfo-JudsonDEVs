#include <stdio.h>

int main (){

    char estadoc1[50], estadoc2[50]; // Nome do Estado
    char codigoc1[20], codigoc2[20]; // Código da cidade
    char nomec1[50], nomec2[50]; // Nome da cidade
    unsigned long int populacaoc1, populacaoc2; // Numero de Habitantes
    float areac1, areac2; // Area em m²
    float pibc1, pibc2; // Produto interno bruto
    float dpopc1, dpopc2; // Densidade populaciona
    float ppcc1, ppcc2; // PIB per capita   
    int pontoc1, pontoc2; // Pontos Turisticos
    float spower1, spower2; // super poder da carta

    printf ("CADASTRE A CARTA 1\n");

    printf ("Estado: \n");
    scanf ("%s", estadoc1);

    printf ("Código: \n");
    scanf ("%s", codigoc1);

    printf ("Cidade: \n");
    scanf ("%s", nomec1);

    printf ("População: \n");
    scanf ("%lu", &populacaoc1);

    printf ("Area: \n");
    scanf ("%f", &areac1);

    printf ("PIB: \n");
    scanf ("%f", &pibc1);

    printf ("Quantidade de Pontos Turísticos: \n");
    scanf ("%d", &pontoc1);

    dpopc1 = (float)(populacaoc1 / areac1); // calculo da densidade populacional.
    ppcc1 = (pibc1 / populacaoc1); // calculo pib per capita.
    spower1 = populacaoc1 + areac1 + pibc1 + pontoc1 + ppcc1 + (1 / dpopc1);

    printf ("Dados Cadastrados\n");

    printf ("Estado: %s\n", estadoc1);
    printf ("Código: %s\n", codigoc1);
    printf ("Cidade: %s\n", nomec1);
    printf ("População: %lu\n", populacaoc1);
    printf ("Área: %fKM²\n", areac1);
    printf ("PIB: %f\n", pibc1);
    printf ("Quantidade de pontos turísticos: %d\n", pontoc1);
    printf ("Densidade Populacional: %.2f hab/km²\n", dpopc1);
    printf ("PIB Per Capita: R$ %.2f\n", ppcc1);
    printf ("Super Poder: %.2f\n", spower1);

    printf ("CADASTRE A CARTA 2\n");

    printf ("Estado: \n");
    scanf ("%s", estadoc2);

    printf ("Código: \n");
    scanf ("%s", codigoc2);

    printf ("Cidade: \n");
    scanf ("%s", nomec2);

    printf ("População: \n");
    scanf ("%lu", &populacaoc2);

    printf ("Area: \n");
    scanf ("%f", &areac2);

    printf ("PIB: \n");
    scanf ("%f", &pibc2);

    printf ("Quantidade de Pontos Turísticos: \n");
    scanf ("%d", &pontoc2);

    dpopc2= (float)(populacaoc2 / areac2); // calculo da densidade populacional.
    ppcc2 = (pibc2 / populacaoc2); // calculo pib per capita.
    spower2 = populacaoc2 + areac2 + pibc2 + pontoc2 + ppcc2 + (1 / dpopc2);

    printf ("Dados Cadastrados\n");

    printf ("Estado: %s\n", estadoc2);
    printf ("Código: %s\n", codigoc2);
    printf ("Cidade: %s\n", nomec2);
    printf ("População: %lu\n", populacaoc2);
    printf ("Área: %fKM²\n", areac2);
    printf ("PIB: %f\n", pibc2);
    printf ("Quantidade de pontos turísticos: %d\n", pontoc2);
    printf ("Densidade Populacional: %.2f hab/km²\n:", dpopc2);
    printf ("PIB Per Capita: R$ %.2f\n", ppcc2);
    printf ("Super Poder: %.2f\n", spower2);

    printf ("-/-/-/-/-/-/-/-/-/- BATALHA DAS CARTAS -/-/-/-/-/-/-/-/-/-\n");

    // Se o resultado for igual a 1 então vitoria da Carta 1
    // Se o resultado for igual a 0 então vitoria da carta 2
    
    printf ("População: %d\n", populacaoc1 > populacaoc2);
    printf ("Area: %d\n", (areac1 > areac2));
    printf ("PIB: %d\n", (pibc1 > pibc2));
    printf ("Pontos Turísticos: %d\n", (pontoc1 > pontoc2));
    printf ("Densidade Populacional: %d\n", (dpopc1 > dpopc2));
    printf ("PIB Per Capita: %d\n", (ppcc1 > ppcc2));
    printf ("Super Poder: %d\n", (spower1 > spower2));



    return 0;

}


