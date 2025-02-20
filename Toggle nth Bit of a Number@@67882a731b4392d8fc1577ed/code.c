#include <stdio.h>
int main(){
    int a,b,c;
    c=1;
    scanf("%d%d",&a,&b);
    for (int i=0;i<b;i++){
        c*=2;
    }
    if (a>=c){
        printf("%d",a-c);
    }
    else {
        printf("%d",a+c);
    }
}