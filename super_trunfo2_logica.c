#include <stdio.h>
#include <string.h> // Para usar a função strlen

int main(){
    char estado1, estado2;
    char codigo_carta1[20], codigo_carta2[20];
    char nome_cidade1[50], nome_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    
    printf("****** Cadastro de Cartas - Super Trunfo ******\n");
    printf(" Cadastro da Carta 1 \n");
    printf("Digite o Estado da primeira carta: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta: \n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade da primeira carta: \n");
    getchar(); // Consome o caractere de nova linha deixado pelo scanf
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin); //fgets: ler strings com espaço

    // Remove a nova linha do final da string, se presente
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';

    printf("Digite a população da primeira carta: \n");
    scanf("%lu", &populacao1);
    
    printf("Digite a área da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib1);

    printf("Digite o número de Pontos Turísticos da primeira carta: \n");
    scanf("%d", &ponto_turistico1);
    // Dados da carta 2
    
    printf("**** Cadastro da Carta 2 ****\n");
    printf("Digite o Estado da segunda carta: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta: \n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade segunda carta: \n");
    getchar(); // Consome o caractere de nova linha deixado pelo scanf
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin); //fgets: ler strings com espaço

    // Remove a nova linha do final da string, se presente
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';
    
    printf("Digite a população da segunda carta: \n");
    scanf("%lu", &populacao2);
    
    printf("Digite a área da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);

    printf("Digite o número de Pontos Turísticos da segunda carta: \n");
    scanf("%d", &ponto_turistico2);
    
    printf("#############################\n");
    printf("Dados da Carta 1\n");
    printf("############################\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %lu Habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    //Nível Aventureiro- operadores
    
    densidade_populacional1 = (float) populacao1 / area1;  //conversão explicita
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidade_populacional1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    
    pib_per_capita1 =  pib1 * 1000000000 / populacao1; // convresão do PIB em Bilhões para reais antes do calcul
    super_poder1 = (float)populacao1+area1+pib1+pib_per_capita1+densidade_populacional1+ponto_turistico1;
    printf("PIB per Capita: %.0f reais\n", pib_per_capita1); // %.0f: imprimir valor inteiro
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico1);
    printf("Super Poder:%.2f\n", super_poder1);
    printf("#############################\n");
    printf("Dados da Carta 2\n");
    printf("############################\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu Habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);

    densidade_populacional2 = (float) populacao2 / area2;  //conversão explicita
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidade_populacional2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    
    pib_per_capita2 =  pib2 * 1000000000 / populacao2; // convresão do PIB em Bilhões para reais antes do calcul
    super_poder2 = (float)populacao2+area2+pib2+pib_per_capita2+densidade_populacional2+ponto_turistico2;
    printf("PIB per Capita: %.0f reais\n", pib_per_capita2); // %.0f: imprimir valor inteiro
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Super Poder:%.2f\n", super_poder2);
    // menu interativo switch
    int propriedade;
    printf("******************************\n");
    printf("****MENU DAS COMPARAÇÕES****\n");
    printf("******************************\n");
    printf("Escolha a propriedade para comparação:\n"); 
    printf("1. População\n");   // opções para efetuar comparações
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB per Capita\n");
    printf("Escolha uma opção: ");
    scanf("%d", &propriedade);

    printf("##########################\n");
    printf("RESULTADO FINAL\n");
    printf("##########################\n");
    // Estrutura switch + lógica em estrutura if e else encadeada
    switch (propriedade) {    
    case 1:
        if (propriedade == 1) { // População
        if (populacao1 > populacao2)
            printf("Carta 1 vence na propiedade: População.\n");
        } else {
            printf("Carta 2 vence na propiedade: População.\n");
        }
        break;
    case 2:
        if (propriedade == 2){
        if (area1 > area2)
            printf("Carta 1 vence na propiedade: Área.\n");
        } else {
            printf("Carta 2 vence na propiedade: Àrea.\n");
        }
        
        break;
    case 3:
        if (propriedade == 3) { // PIB
        if (pib1 > pib2)
            printf("Carta 1 vence na propiedade: PIB.\n");
        } else {
            printf("Carta 2 vence na propiedade: PIB.\n");
        }
        break; // pausa
    case 4:
        if (propriedade == 4) { // Densidade populacional
        if (densidade_populacional1 < densidade_populacional2)
            printf("Carta 1 vence na propiedade: densidade populacional.\n");
        } else {
            printf("Carta 2 vence na propiedade: densidade populacional.\n");
        }
        break;
    case 5:
        if (propriedade == 5) {
        if (pib_per_capita1 > pib_per_capita2)
            printf("Carta 1 vence na propiedade: PIB per Capita.\n");
        } else {
            printf("Carta 2 vence na propiedade: PIB per Capita.\n");
        }
        break;
    default:
        printf("Opção Inválida!\n");
        break;
    }

    return 0;

}
