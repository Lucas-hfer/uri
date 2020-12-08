#include <stdio.h>
 
int main() {
 
    int i = 0, V[i], L, lv1 = 0, lv2 = 0, lv3 = 0;
    scanf("%d", &L);
    do{
        scanf("%d\b", &V[i]);
        if(V[i] < 10){
            lv1 = 1;
        }
        if((V[i] >= 10) && (V[i] < 20)){
            lv2 = 2;
        }
        if(V[i] >= 20){
            lv3 = 3;
        }
        i++;
    }while(i < L);
    if ((lv3 > lv2) && (lv3 > lv1)){
        printf("%d", lv3);
    }
    if ((lv2 > lv3) && (lv2 > lv1)){
        printf("%d", lv2);
    }
    if ((lv1 > lv3) && (lv1 > lv2)){
        printf("%d", lv1);
    }
    return 0;
}
