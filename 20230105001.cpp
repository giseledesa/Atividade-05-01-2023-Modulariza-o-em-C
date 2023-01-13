#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int scanIntIntervalo(int n){
    int j=1;
    while (j=1){
          printf("DIGITE UM NÚMERO: ");
          scanf("%d",&n);
          if (n>=0 && n<=1000){
             j=0;
             return n;
          }else{
                fflush(stdin);
                printf("O VALOR INSERIDO DEVE ESTAR NO INTERVALO DE 0 A 1000\n");
          }
    }
}

float percentual(int x, int y){
    float porcentagem;
    if (x >= y){
        porcentagem = (x*100)/y;
        printf("\nPercentual: %.2f%%\n", porcentagem);  
    }
    else{
        porcentagem = (y*100)/x;
        printf("\nPercentual: %.2f%%\n", porcentagem);            
    }
}  

int absdif(int s,int r){
    int dif, vabs;
    dif = s - r;
    vabs = abs(dif);
    printf("O valor absoluto da diferença entre os %d e %d números: %d\n",s,r, dif);    
}

int main(){
    int num1, num2;
    num1 = scanIntIntervalo(num1);
    num2 = scanIntIntervalo(num2);
    fflush(stdin);
    printf("1° valor: %d\n2° valor: %d",num1, num2);
    percentual(num1,num2);
    absdif(num1,num2);
    return 0;
    }
