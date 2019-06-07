#include <string.h>
#include<stdio.h>
#include<ctype.h>
int main(){

int n,i,j,k,cont,a1,b1;
char a[1001];
char b[1001];
scanf("%d",&n);
for(i=0;i<n;i++){
        cont=0;
        scanf("%s %s",&a,&b);

        a1=strlen(a);
        b1=strlen(b);

    for(j=b1,k=a1;j>=0;j--,k--){
        if(a[k]==b[j])cont++;
             else break;

        }
        if(cont == b1+1){
            printf("encaixa\n");
        }

          else {
            printf("nao encaixa\n");
        }
    }




return 0;
}
