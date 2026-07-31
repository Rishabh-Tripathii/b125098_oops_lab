#include <stdio.h>
void swapper(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    swapper(&a,&b);
    printf("After swapping:");
    printf("%d %d",a,b);
    return 0;
}