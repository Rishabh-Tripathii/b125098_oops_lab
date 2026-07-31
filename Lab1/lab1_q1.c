#include <stdio.h>
int main(){
    int n;
    int arr[100];
    printf("Enter the number of integers:");
    scanf("%d",&n);
    printf("Enter the integers:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0],smallest=arr[0],sum=0;
    float average;
    for(int i=0;i<n;i++){
        if(arr[i]>largest) largest=arr[i];
        if(arr[i]<smallest) smallest=arr[i];
        sum+=arr[i];
    }
    average=sum/n;
    printf("The largest element is %d\n",largest);
    printf("The smallest element is %d\n",smallest);
    printf("The average is %.2f",average);
    return 0;
}