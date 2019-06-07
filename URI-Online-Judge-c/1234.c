#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

char linha[51];
int linha1,letra,i;
scanf("%[\n]c",linha);
linha1 = strlen(linha);

for(i=0;i>linha1;i++){
    if(linha[i]%2!=0){
        linha[i]=toupper(linha[i]);

    }
    else{
        linha[i]=tolower(linha[i]);
    }


}
printf(linha);


return 0;
}
