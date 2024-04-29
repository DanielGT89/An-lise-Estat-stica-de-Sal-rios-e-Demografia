#include <stdio.h>

int main()
{
    
    int idademaior;
    int idademenor;
    int idade;
    int Erro;
    int sexo;
    int sexoM;
    int sexoF;
    float salariomenor;
    float calculo;
    float media = 3;
    float salario = 0;
    float soma = 0;
    float cont = 0;
    while(cont <2){
        
    idademaior = idade;
    idademenor = idade;
    
    
    salariomenor = salario;
    
    printf("Digite o valor do seu salario:\n");
    scanf("%f",&salario);
    printf(" (Marcelo) Digite <1> Masculino  <2> Feminino \n, ");
    scanf("%d",&sexo);
    printf("Digite sua idade:\n");
    scanf("%d",&idade);
    
    

        if (salario<salariomenor){
            salariomenor=salario;
           
        }
        
         if(idade>idademaior){
             idademaior=idade;
             
            }
         
         
         else if(idade<idademenor){
             idademenor=idade;
             
            }
            
         
         
         if(sexo==2){
             sexoM++;
         }
         else if(sexo==1){
             sexoF++;
         }
          else if (sexo>=3){
              Erro++;
              
                   printf(" Valor Invalidado!\n");
        
          }
         
         soma = (soma+salario);
        
       calculo = (soma/media);
  
    
    
      cont++;
     
     }
     
     
         printf("Seu media salarial é:R$ %.2f\n",calculo);
         printf("A quantidade de mulheres na regiao é: %d\n", sexoM);
         printf("A maior idade e: %d\n",idademaior);
         printf("A menor idade é de Paula: %d\n",idademenor);
         printf ("Menor salario %.2f",salariomenor);
    
}
