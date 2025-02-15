#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a>>b;
    if (c%2==0){
        printf("0");
    }
    else{
        printf("1");
    }
}