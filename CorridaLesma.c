#include <stdio.h>
 
int main() {
    int a,i,max;    
    
    while(scanf("%d",&a)!=EOF){
        int V[a];
        max = 0;

        for(i=0; i < a; i++){
            scanf("%d", &V[i]);
            if(max < V[i]){
                max = V[i];
            }
        }

        if(max < 10){
            printf("1\n");
        } else if(max<20){
            printf("2\n");
        } else {
            printf("3\n");
        }
    }
    
    /*do{
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
    }*/
    return 0;
}
