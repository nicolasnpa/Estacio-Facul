#include <stdio.h>

int main() {
    // Carta 1
    char estado1[] = "A";
    char codigo1[] = "A01";
    char cidade1[] = "Sao Jose";
    int populacao1 = 850000;
    int area1 = 950000;
    int pib1 = 45000;
    int pontos_turisticos1 = 105;

    // Carta 2
    char estado2[] = "B";
    char codigo2[] = "B02";    
    char cidade2[] = "Paraty";
    int populacao2 = 50000;
    int area2 = 200000;
    int pib2 = 9000;
    int pontos_turisticos2 = 31;

    /*
    Temos acima cadastrado as duas cartas 
    importante se atentar no CHAR e INT
    */

    // Exibindo dados da primeira carta
    printf("Carta 1:\n");
    printf("estado: %s\n", estado1);
    printf("codigo: %s\n", codigo1);
    printf("cidade: %s\n", cidade1);
    printf("populacao: %d mil\n", populacao1);
    printf("area: %d km²\n", area1);
    printf("pib: %d mil\n", pib1);
    printf("pontos turísticos: %d\n", pontos_turisticos1);
    
    printf("\n");

    // Exibindo dados da segunda carta
    printf("Carta 2:\n");
    printf("estado: %s\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d mil\n", populacao2);
    printf("area: %d km²\n", area2);
    printf("pib: %d mil\n", pib2);
    printf("pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}