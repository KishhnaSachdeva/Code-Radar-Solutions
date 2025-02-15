#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a>>b;
    if (a%2==0){
        printf("0");
    }
    else{
        printf("1");
    }
}