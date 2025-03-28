#include <stdio.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    //variaveis da primeira carta a serem preenchidas pela entrada do usu�rio
    char estado_da_carta1;
    char codigo_da_carta1[3];
    char cidade_da_carta1[10];
    unsigned long int populacao_da_carta1;
    float area_da_carta1;
    float pib_da_carta1;
    int numero_dePontosTuristicos_carta1;

    //variaveis da segunda carta a serem preenchidas pela entrada do usu�rio
    char estado_da_carta2;
    char codigo_da_carta2[3];
    char cidade_da_carta2[10];
    unsigned long int populacao_da_carta2;
    float area_da_carta2;
    float pib_da_carta2;
    int numero_dePontosTuristicos_carta2;

    //Inicio do programa
    printf("\nSeja bem-vindo ao super trunfo! Para iniciar, por favor digite os dados de duas cartas, seguindo a ordem das perguntas.\nVamos l� com a primeira!\n");
   
    //Perguntas para formar a primeira carta
    printf("\nVamos come�ar pelo nome do estado, aqui voc� deve digitar uma letra(mai�scula) de A a H\nNome do estado: ");
    scanf(" %c", &estado_da_carta1);
    char estado_final1 = estado_da_carta1;    

    printf("\nAgora o codigo da carta, formado pela letra escolhida anteriormente + um numero de 01~04(Ex: H04) \nC�digo da carta: ");
    scanf("%s", codigo_da_carta1);

    printf("\nAgora o nome da cidade, aqui n�o pode conter nenhum espa�o!\nNome da cidade: ");
    scanf("%s", cidade_da_carta1);

    printf("\nAgora a popula��o da cidade, aqui deve ter somente n�meros sem v�rgulas!\nPopula��o da cidade: ");
    scanf("%lu", &populacao_da_carta1);

    printf("\nAgora a area da cidade, aqui deve ter somente n�meros, pode colocar v�rgula, mas lembre de usar o ponto[.] no lugar da v�rgula[,]!\n�rea da cidade: ");
    scanf("%f", &area_da_carta1);

    printf("\nAgora o PIB da cidade, aqui deve ter somente n�meros, mas lembre de usar o ponto[.] no lugar da v�rgula[,]!!\nPIB da cidade: ");
    scanf("%f", &pib_da_carta1);

    printf("\nAgora o n�mero de pontos tur�sticos da cidade, aqui deve ter somente n�meros!\nPontos tur�sticos da cidade: ");
    scanf("%d", &numero_dePontosTuristicos_carta1);

    // Inicio da coleta dos dados da segunda carta
    printf("\nAgora os dados da sua segunda carta!\n");

    // Perguntas da segunda carta
    printf("\nVamos come�ar pelo nome do estado, aqui voc� deve digitar uma letra(mai�scula) de A a H\nNome do estado: ");
    scanf(" %c", &estado_da_carta2);
    char estado_final2 = estado_da_carta2;    

    printf("\nAgora o codigo da carta, formado pela letra escolhida anteriormente + um numero de 01~04(Ex: H04) \nC�digo da carta: ");
    scanf("%s", codigo_da_carta2);

    printf("\nAgora o nome da cidade, aqui n�o pode conter nenhum espa�o!\nNome da cidade: ");
    scanf("%s", cidade_da_carta2);

    printf("\nAgora a popula��o da cidade, aqui deve ter somente n�meros sem v�rgulas!\nPopula��o da cidade: ");
    scanf("%lu", &populacao_da_carta2);

    printf("\nAgora a area da cidade, aqui deve ter somente n�meros, pode colocar v�rgula, mas lembre de usar o ponto[.] no lugar da v�rgula[,]!\n�rea da cidade: ");
    scanf("%f", &area_da_carta2);

    printf("\nAgora o PIB da cidade, aqui deve ter somente n�meros, mas lembre de usar o ponto[.] no lugar da v�rgula[,]!!\nPIB da cidade: ");
    scanf("%f", &pib_da_carta2);

    printf("\nAgora o n�mero de pontos tur�sticos da cidade, aqui deve ter somente n�meros!\nPontos tur�sticos da cidade: ");
    scanf("%d", &numero_dePontosTuristicos_carta2);

    //calculo de densidade, pib per capita e SUPER  da carta 1
    float pib_per_capita_carta1 = pib_da_carta1/populacao_da_carta1;
    float densidade_populacional_carta1 = populacao_da_carta1/area_da_carta1;
    double superpoder_carta1 =  populacao_da_carta1 + area_da_carta1 + pib_da_carta1 + numero_dePontosTuristicos_carta1 + 1/densidade_populacional_carta1; 

    //saida no terminal dos dados da primeira carta
    printf("\n\nCarta 1:\nEstado: %c\nC�digo: %s\nNome da cidade: %s\nPopula��o: %d\n�rea: %.2f km�\nPib: %.2f bilh�es de reais\nN�mero de pontos tur�sticos: %d\nDensidade Populacional: %.2f hab/km�\nPIB per capita: %.2f reais\nSuper Poder: %.2f", estado_final1, codigo_da_carta1, cidade_da_carta1, populacao_da_carta1, area_da_carta1, pib_da_carta1, numero_dePontosTuristicos_carta1, densidade_populacional_carta1, pib_per_capita_carta1, superpoder_carta1); 

    //calculo de densidade, pib per capita e SUPER PODER da carta 2
    float pib_per_capita_carta2 = pib_da_carta2/populacao_da_carta2;
    float densidade_populacional_carta2 = populacao_da_carta2/area_da_carta2;
    double superpoder_carta2 =  populacao_da_carta2 + area_da_carta2 + pib_da_carta2 + numero_dePontosTuristicos_carta2 + 1/densidade_populacional_carta2;

    //saida no terminal dos dados da segunda carta
    printf("\n\nCarta 2:\nEstado: %c\nC�digo: %s\nNome da cidade: %s\nPopula��o: %d\n�rea: %.2f km�\nPib: %.2f bilh�es de reais\nN�mero de pontos tur�sticos: %d\nDensidade Populacional: %.2f hab/km�\nPIB per capita: %.2f reais\nSuper Poder: %.2f", estado_final2, codigo_da_carta2, cidade_da_carta2, populacao_da_carta2, area_da_carta2, pib_da_carta2, numero_dePontosTuristicos_carta2, densidade_populacional_carta2, pib_per_capita_carta2, superpoder_carta2);

    //Compara��o entre as cartas
    printf("\nCompara��o entre as cartas:");
    
    // variaveis da compara��o
    int comp_cartas_populacao = populacao_da_carta1 > populacao_da_carta2;
    int comp_cartas_area = area_da_carta1 > area_da_carta2;
    int comp_cartas_pib = pib_da_carta1 > pib_da_carta2;
    int comp_cartas_turisticos = numero_dePontosTuristicos_carta1 > numero_dePontosTuristicos_carta2;
    int com_densidade_populacao = densidade_populacional_carta1 < densidade_populacional_carta2;
    int comp_pib_per_capita = pib_per_capita_carta1 > pib_per_capita_carta2;
    int comp_cartas_superPoder =  superpoder_carta1 > superpoder_carta2;
    
    // Sa�da de dados da compara��o
    printf("\n\nPopula��o: %d\n�rea: %d \nPib: %d \nN�mero de pontos tur�sticos: %d\nDensidade Populacional: %d \nPIB per capita: %d \nSuper Poder: %d", comp_cartas_populacao, comp_cartas_area, comp_cartas_pib, comp_cartas_turisticos, comp_cartas_populacao, comp_pib_per_capita, comp_cartas_superPoder);

    return 0;
}

