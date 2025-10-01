 int torre = 1;
    int bispo = 1;
    int rainha = 1;

    //Iniciando o jogo
    printf("#### Jogo de xadrez ### \n");
    //Movendo a torre 5 casas a direta
    for(torre ; torre <=  5; torre++)
    {
        printf("A torre moveu %d casa(s) à direita\n", torre);
    } 
    printf("\n\n");
    //Movendo o bispo 5 casas a direita
    do{
        if(bispo <= 5){
            printf("O bispo moveu %d casas á direita\n", bispo);
        }
        bispo++;
    }while(bispo <= 5) ;
     printf("\n\n");
    
//Movendo o a Rainha 8 casas a esquerda

    while(rainha <= 8){
        printf("A rainha moveu %d casas á esquerda\n", rainha);
        rainha++;
    }
    
    return 0;
}
  x