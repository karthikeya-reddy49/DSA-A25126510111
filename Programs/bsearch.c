#include<stdio.h>
int main() {

    int arr[]={10,20,30,40,50,60,70,80,90};
    int left=0; 
    int right= 8;

    int target;
    printf("Enter target : ");
    scanf("%d",&target);

    while(left<right) {
        int mid= (left+right)/2;
        if(arr[mid]==target){
            printf("Element found at index %d",mid);
            return 0;
        }
        else if(arr[mid]>target) {
            right=mid-1;
        }

        else left=mid+1;
    }

    printf("Element not found");
    return 0;
}