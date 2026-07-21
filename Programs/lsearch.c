#include <stdio.h>
int main() {
int arr[]={10,20,40,30,50,60,70};
int target;

printf("Enter target : ");
scanf("%d",&target);

for (int i = 0; i < 7; i++) {
        if (arr[i] == target) {
            printf("Element found at index %d", i);
            return 0;
        }
    }

    printf("Element not found");
    return 0;
}
