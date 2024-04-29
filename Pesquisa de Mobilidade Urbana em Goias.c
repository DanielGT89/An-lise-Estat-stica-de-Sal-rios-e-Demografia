int main()
{
    int temcarro;
    int cidade;
    int trindadesemcarro = 0;
    int goianiasemcarro = 0;
    int aparecidasemcarro = 0;
    int canedosemcarro = 0;
    int cont = 0;
    int flag =1;
    while(flag!=0){
     printf("Deseja participar de uma pesquisa, sobre uma empresa de transporte?\n <1> SIM\n <0> NAO\n ");
     scanf("%d",&flag);
         if(flag!=0){
         
       while (cont < 4 && flag != 0) {
        printf("Se voce tem carro digite (1) para SIM (2) NAO:\n");
        scanf("%d", &temcarro);
        
        printf("Em qual cidade voce mora?\n");
        printf("(1) Trindade\n");
        printf("(2) Goiania\n");
        printf("(3) Aparecida\n");
        printf("(4) Canedo\n");
        scanf("%d", &cidade);
        
         
        if (temcarro == 2) {
            if (cidade == 1) {
                trindadesemcarro++;
            } else if (cidade == 2) {
                goianiasemcarro++;
            } else if (cidade == 3) {
                aparecidasemcarro++;
            } else if (cidade == 4) {
                canedosemcarro++;
            } else {
                printf("Cidade invalida.\n");
            }
        }
        
        cont++;
      }
    }
   }      printf("Numero de pessoas sem carro em Trindade: %d\n", trindadesemcarro);
         printf("Numero de pessoas sem carro em Goiania: %d\n", goianiasemcarro);
         printf("Numero de pessoas sem carro em Aparecida: %d\n", aparecidasemcarro);
         printf("Numero de pessoas sem carro em Canedo: %d\n", canedosemcarro);
}
