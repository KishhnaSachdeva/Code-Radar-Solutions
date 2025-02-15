#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=2**b;
    if (a>=c){
        printf("1");
    }
    else{
        printf("0");
    }
}