#include <stdio.h>
#include <math.h>
 
int main() {
 
    /**
     a hora de inicio pode ser menor ou maior que a de fim
     se o inicio é menor que o fim, so andar somando até o final

     se o inicio é maior, vai até 24 e começa do 0 até chegar no final
     */

    int HI, HF, DH;
    //hora de inicio
    scanf("%d",&HI);
    
    //hora de termino
    scanf("%d", &HF);

    if(HI < HF){
        DH = fabs(HF-HI);
    }

    if(HF < HI){
        DH = HF + fabs(24-HI);
    }

    if (HF == HI){
        DH = 24;
    }


    printf("O JOGO DUROU %d HORAS(S)\n", DH);   


    return 0;
}
