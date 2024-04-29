int main()
{
    float porcentagem =100;
    float PizzaHut=0;
    float McDonalds=0;
    float BurguerKing=0;
    float Lanche=0;
    float cont=0;
    int flag=1;
    while(flag!=0){
        printf ("Deseja deixar sua opiniao?\n<1> SIM \n<0> NAO\n");
        scanf("%d",&flag);
       if(flag!=0){
        
        printf("Qual Lanche voce gosta?\n");
        printf("<1> Para Pizza Hut?\n");
        printf("<2> Para McDonalds?\n");
        printf("<3> Para Burguer King?\n");
        scanf("%f",&Lanche);
        
        if(Lanche==1){
            PizzaHut++;
        }
        else if(Lanche==2){
            McDonalds++;
        }
        else if(Lanche==3){
            BurguerKing++;
        }else{
            printf("LANCHE INVALIDO!\n");
     }
    } 
    cont++;
} 
    
    printf("Resultados da pesquisa:\n");
    printf("A porcentagem do Lanche PizzaHut%f\n"  ,PizzaHut/porcentagem);
    printf("A porcentagem do Lanche McDonalds%f\n"  ,McDonalds/porcentagem);
    printf("A porcentagem do Lanche BurguerKingt%f\n"  ,BurguerKing/porcentagem);
      
}


		