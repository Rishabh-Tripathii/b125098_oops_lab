#include <stdio.h>
int main(){
    int n,i;
    int arr[100];
    int *ptr;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the integers:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    ptr=arr;
    for(i=0;i<n;i++){
        sum+=*(ptr+i);
    }
    printf("The sum of the elements is %d",sum);
    return 0;
}