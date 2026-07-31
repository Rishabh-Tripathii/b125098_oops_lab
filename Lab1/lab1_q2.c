#include <stdio.h>
int main(){
    int n;
    int arr[100],rev[100];
    printf("Enter the number of integers:");
    scanf("%d",&n);
    printf("Enter the integers:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-i-1;i>=0;i++){
        int j=n-i-1;
        printf("%d ",arr[j]);
    }
    return 0;
}