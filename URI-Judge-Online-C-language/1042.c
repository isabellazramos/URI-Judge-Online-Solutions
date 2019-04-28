#include <stdio.h>
int main(){

    int aux,b,a,c,i[3],j[3];
    for (c = 0;c < 3;c++){
        scanf("%d\n",&i[c]);
        j[c] = i[c];
        if(c == 2){
            break;
        }
    }
    for(b = 0; b < 3; b++){
        for (a = b + 1; a < 3; a++){
            if(i[b] > i[a]){
                aux = i[b];
                i[b] = i[a];
                i[a] = aux;
            }
        }
    }
    for (a = 0; a < 3 ; a++){
        printf("%d\n",i[a]);
    }
    printf("\n");
    for (a = 0; a < 3 ; a++){
        printf("%d\n",j[a]);
    }
return 0;
}
