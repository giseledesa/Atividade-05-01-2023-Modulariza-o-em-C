#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fatorial(int n){
    int fat=1, i = 1;
    if(n == 0 || n == 1){
         fat = 1;
         printf("FATORIAL DE %d EH: %d", n, fat);
    }
    else{
         while(i<=n){
             fat = fat*i;
             i++;
         }
         printf("FATORIAL DE %d EH: %d", n, fat);
    }
}

int main(){
    int num, i = 0;
    while(i == 0){
        printf("INSIRA UM VALOR: ");
        scanf("%d",&num);
        if(num >= 0){
            fatorial(num);
            i +=1;
        }else{
            printf("\nValor inválido\nDigite novamente: \n");
        }
    }
}
