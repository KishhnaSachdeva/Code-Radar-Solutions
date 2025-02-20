#include <stdio.h>
int main(){
    int a,b,c;
    c=a>>b;
    int d=1;
    scanf("%d%d",&a,&b);
    for (int i=0;i<b;i++){
        d*=2;
    }
    if (c%2==0){
        printf("%d",a-d);
    }
    else {
        printf("%d",a+d);
    }
}