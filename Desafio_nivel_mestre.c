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
    int atributo_de_comp;

    printf("\n\nSer� feita a compara��o entre as cartas %s e %s:\nQual atributo voce deseja comparar?\n1.Popula��o\n2.�rea\n3.PIB\n4.Numero de pontos turisticos\n5.Densidade Demogr�fica\n6.Pib per capita\n7.Super Poder\n", cidade_da_carta1, cidade_da_carta2);

    scanf("%d", &atributo_de_comp);

    switch (atributo_de_comp)
    {
    case 1:
        if(populacao_da_carta1 > populacao_da_carta2){
            printf("\nPopula��o: carta 1 venceu");
        }else if(populacao_da_carta1 < populacao_da_carta2){
            printf("\nPopula��o: carta 2 venceu");
        }else{
            printf("\nPopula��o: Empate");
        }
        break;
    case 2:
        if(area_da_carta1 > area_da_carta2){
            printf("\nArea: carta 1 venceu");
        }else if(area_da_carta1 < area_da_carta2){
            printf("\nArea: carta 2 venceu");
        }else{
            printf("\nArea: Empate");
        }
        break;

    case 3:
        if(pib_da_carta1 > pib_da_carta2){
            printf("\nPIB: carta 1 venceu");
        }else if(pib_da_carta1 < pib_da_carta2){
            printf("\nPIB: carta 2 venceu");
        }else{
            printf("\nPIB: Empate");
        }
        break;

    case 4:
        if(numero_dePontosTuristicos_carta1 > numero_dePontosTuristicos_carta2){
            printf("\nPontos Turisticos: carta 1 venceu");
        }else if(numero_dePontosTuristicos_carta1 < numero_dePontosTuristicos_carta2){
            printf("\nPontos Turisticos: carta 2 venceu");
        }else{
            printf("\nPontos Turisticos: Empate");
        }
        break;
    
    case 5:
        if(densidade_populacional_carta1 < densidade_populacional_carta2){
            printf("\nDensidade populacional: carta 1 venceu");
        }else if(densidade_populacional_carta1 > densidade_populacional_carta2){
            printf("\nDensidade populacional: carta 2 venceu");
        }else{
            printf("\nDensidade populacional: Empate");
        }
        break;

    case 6:
        if(pib_per_capita_carta1 > pib_per_capita_carta2){
            printf("\nPib per capita: carta 1 venceu");
        }else if(pib_per_capita_carta1 < pib_per_capita_carta2){
            printf("\nPib per capita: carta 2 venceu");
        }else{
            printf("\nPib per capita: Empate");
        }
        break;

    case 7:
        if(superpoder_carta1 > superpoder_carta2){
            printf("\nSuperpoder: carta 1 venceu");
        }else if(pib_per_capita_carta1 < pib_per_capita_carta2){
            printf("\nSuperpoder: carta 2 venceu");
        }else{
            printf("\nSuperpoder: Empate");
        }
        break;

    default:
        printf("N�o houve uma entrada valida");
        break;
    }
    
    // variaveis da compara��o
    

    

    

    

    

    

    

   

    return 0;

    
}

