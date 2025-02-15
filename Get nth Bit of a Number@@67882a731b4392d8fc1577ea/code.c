#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    double c=1;
    for (double i=1;i<=b;i++){
        c*=2;
    }
    if (a>=c){
        printf("1");
    }
    else{
        printf("0");
    }
}