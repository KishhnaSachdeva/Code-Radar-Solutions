#include <stdio.h>
int main(){
    int a,b,c=1;
    scanf("%d%d",&a,&b);
    for (int i=1;i<=b;i++){
        c*=2;
    }
    printf("%d",a-c);
}