#include <stdio.h>
int main(){
    int a;
    int c=1;
    scanf("%d",&a);
    if (a==1){
        printf("%d",31);
    }
    for(int i=1;i<a;i++){
        c*=2;
        if (c>=a){
            printf("%d",31-i);
        }
    }
}