#include <stdio.h>
#include <string.h>

    // Struct para representar uma carta de país
        typedef struct {

    //Variáveis da carta 1
        char nome[50];
        int populacao;               // em milhões
        float area;                  // em km²
        float pib;                   // em trilhões
        int pontos_turisticos;      
        float densidade_demografica;

        } CartaPais;

        int main () {

    // Cadastro prévio de duas cartas
        CartaPais carta1 = {"Brasil", 125, 8515.8, 1.84, 15, 25.0};
        CartaPais carta2 = {"Japão", 125, 377.9, 4.94, 20, 330.8};

        int opcao;

    //Menu interativo
        printf("=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS ===\n");
        printf("Escolha o atributo para comparar: \n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("5. Escolha a opção desejada:\n");
        scanf("%d", &opcao);

        printf("\nComparando %s x %s\n", carta1.nome, carta2.nome);


            switch(opcao) {
             case 1:
                printf("Atributo escolhido: População (em milhões)\n");
                printf("%s: %d | %s: %d\n", carta1.nome, carta1.populacao, carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao){
                printf("Vencedor: %s\n", carta1.nome);
            }else if (carta2.populacao > carta1.populacao){
                printf("Vencedor: %s\n", carta2.nome);
            }else{
                printf("Houve um Empate!\n");
            }
            break;

            case 2:
                 printf("Atributo escolhido: Área (em km²)\n");
                 printf("%s: %.2f | %s: %.2f\n", carta1.nome, carta1.area, carta2.nome, carta2.area);
            if (carta1.area > carta2.area){
                printf("Vencedor: %s\n", carta1.nome);
            }else if (carta2.area > carta1.area){
                printf("Vencedor: %s\n", carta2.nome);
            }else{
                printf("Houve um Empate!\n");
            }
            break;

            case 3:
                printf("Atributo escolhido: PIB (em trilhões de USD)\n");
                printf("%s: %.2f | %s: %.2f\n", carta1.nome, carta1.pib, carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib){
                printf("Vencedor: %s\n", carta1.nome);
            }else if (carta2.pib > carta1.pib){
                printf("Vencedor: %s\n", carta2.nome);
            }else{
                printf("House um Empate!\n");
            }
            break;

            case 4:
                printf("Atributo escolhido: Pontos Turísticos\n");
                printf("%s: %d | %s: %d\n", carta1.nome, carta1.pontos_turisticos, carta2.nome, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos){
                printf("Vencedor: %s\n", carta1.nome);
            }else if (carta2.pontos_turisticos > carta1.pontos_turisticos){
                printf("Vencedor: %s\n", carta2.nome);
            }else{
                printf("Empate!\n");
            }
            break;

            case 5:
                printf("Atributo escolhido: Densidade Demográfica (habitantes/km²)\n");
                printf("%s: %.2f | %s: %.2f\n", carta1.nome, carta1.densidade_demografica, carta2.nome, carta2.densidade_demografica);
            if (carta1.densidade_demografica < carta2.densidade_demografica) {
                printf("Vencedor: %s (menor densidade)\n", carta1.nome);
            } else if (carta2.densidade_demografica < carta1.densidade_demografica) {
                printf("Vencedor: %s (menor densidade)\n", carta2.nome);
            } else {
                printf("Houve um Empate!\n");
            }
            break;

            default:
                printf("Opção inválida! Por favor, escolha uma opção de 1 a 5.\n");
            break;
            }

            return 0;
            }
        
