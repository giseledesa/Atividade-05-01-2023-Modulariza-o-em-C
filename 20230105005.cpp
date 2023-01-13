#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fibonacci(int n)                             
{                                          
   int i, fib1 = 1, fib2 = 1, soma;         
   for (i = 3; i <= n; i = i + 1)           
   {                                        
       soma = fib1 + fib2;                    
       fib1 = fib2;                           
       fib2 = soma;                           
   }                                        
   return fib2;                             
}

int main(){
    int num, i = 0;
    while(i == 0){
        printf("INSIRA UM VALOR: ");
        scanf("%d",&num);
        if(num >= 0){
            fibonacci(num);
            i +=1;
        }else{
            printf("\nValor inválido\nDigite novamente: \n");
        }
    }
}
