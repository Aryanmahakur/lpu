#include <stdio.h>
#include <stdbool.h>
int main() {
    int arr[10];  
    int n; 
      
    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    if (n > 10) {
        printf("Error: too many elements (max 10 allowed).\n");
        return 1;
    }

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos = 5;   // position to insert
    int val = 20;  // value to insert

    // INSERTION
    if (pos == 0) {   // beginning
        for (int i = n - 1; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = val;
        n++;
    }
    else if (pos > 0 && pos < n) {  // middle
        for (int i = n - 1; i >= pos; i--) {
            arr[i + 1] = arr[i];
        }
        arr[pos] = val;
        n++;
    }
    else if (pos == n) {  // end
        arr[n] = val;
        n++;
    }

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // DELETION
    int a = arr[n-1]; // this will get deleted we using this for linear search;
    printf("%d",a);

    pos = 2;  // delete at index 2
    if (pos == 0) {   // beginning
        for (int i = 0; i < n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--;
    }
    else if (pos > 0 && pos < n-1) {   // middle
        for (int i = pos; i < n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--;
    }
    
    else if (pos == n-1) {   // end
        n--;
    }

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("Linear Search ");
     
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==a){
            printf(" we have last var");
            flag=true;
        }

    }
    if(!flag){
        printf("we have deleted or dont have n-1");
    }
    return 0;
}
