#include <stdio.h>

float tipoParto(float kg, float wk){
      float meses;
      if (kg >= 100 && wk >= 28){
         meses = wk/4;
         if(kg > 2500 && meses >= 7)
         {
             printf("\nParto Normal");
         }
         else if (kg > 2500 && meses < 7)
         {
             printf("\nParto Cesariana");
         }
         else  if (kg <= 2000 && kg >= 1500  && meses >= 9)
         {
             printf("\nParto Normal");
         }
         else{
             printf("\nParto Cesariana");
         }
      }else{
          printf("\nParto não deverá ser realizado, reavaliar clinicamente");
      }
}

float pesoFeto(float p, float sem){
    printf("Peso do feto em Gramas: ");
    scanf("%f",&p);
    printf("Quantidade de semanas: ");
    scanf("%f",&sem); 
    tipoParto(p, sem);
}


int main()
{
    float peso, semana;
    pesoFeto(peso, semana);
    
    return 0;
}
