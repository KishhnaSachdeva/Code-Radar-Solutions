#include <stdio.h>
int main(){
    int a,c;
    int i=0;
    scanf("%d",&a);
    while (a>0){
        c=a>>i;
    if (c%2!=0){
        printf("%d",i);
        break;  
    }
        i+=1;
    }
} 