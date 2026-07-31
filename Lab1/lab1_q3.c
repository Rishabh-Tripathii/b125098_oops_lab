#include <stdio.h>
int main(){
    int n,X,found=-1;
    int arr[100];
    printf("Enter the number of integers:");
    scanf("%d",&n);
    printf("Enter the integers:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search:");
    scanf("%d,&X");
    for(int i=0;i<n;i++){
        if(arr[i]==X){
            found=i;
            break;
        }
    }
    if(found==-1) printf("Element not found");
    else printf("Found at %d",found);
    return 0;
}