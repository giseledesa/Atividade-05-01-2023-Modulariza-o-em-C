#include<stdio.h>

int verificaPerfeito(int numero){
    int i, aux =0;
    float resto;
    for(i=1; i<numero; i++ ){
        resto = numero%i;
        if(resto == 0){
            aux += i;
        }
    }
    if(aux == numero){
        printf("o numero %d EH um NUMERO PERFEITO", numero);
    }
    else {
        printf("o numero %d NAO EH um NUMERO PERFEITO", numero);
    }
}

int verificaPar(int par)
{
    int j = 0;
    while (j==0){
        printf("\nValor: ");
        scanf("%d", &par);
        if(par%2 == 0){
            verificaPerfeito(par);
            j=1;
            break;
        }
        else {
            printf("Insira um valor par\n");
        }
    }
}

int main()
{
    int num;
    num = verificaPar(num);
    return 0;
}
