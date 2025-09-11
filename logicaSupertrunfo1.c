#include <stdio.h>

int main () {

    //Variáveis da carta 1
        int populacao1 = 7200;
        int turistas1 = 1000;
        float area1 = 1000000;
        char estado1[] = "SC";
        char cidade1[] = "Biguacu";
        char sigla[] = "SC";
        float pib1 = 230000.0;
        float densidade1 = 150;
        float pibcapita1 = 123232;

    //Variaveis da carta 2
        int populacao2 = 5200;
        int turistas2 = 500;
        float area2 = 900000;
        char estado2[] = "SC";
        char cidade2[] = "Florianopolis";
        char sigla2[] = "SC";
        float pib2 = 221000.0;
        float densidade2 = 140;
        float pibcapita2 = 23232;
    
    //Calculando
        densidade1 = (float)populacao1 / area1;
        pibcapita1 = pib1 / populacao1;

        densidade2 = (float)populacao2 / area2;
       
        pibcapita2 = pib2 / populacao2;

    //Comparacao entre atributos de população
        printf("Comparação de cartas (Atributo: População): \n\n");
        printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    //resultado
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

        }
            return 0;
}