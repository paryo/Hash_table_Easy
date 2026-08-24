
#include <stdio.h>

void isPermutation(int arr[] , int arr_size , int n) {

    int count[10] = {0};

    if (arr_size !=n) {

        printf("Invalid array size code can not be proceed");

    }

    for (int i=0 ; i<arr_size;i++) {

        if (arr[i] < 1 || arr[i] >n) {

            printf("Invalid: Element %d is out of range (1 to %d)\n", arr[i], n);
            return;

        }

        count[arr[i]]++;
    }



    for (int i = 0 ; i<arr_size;i++) {

        if (count[arr[i]] !=1) {

            printf("Duplicate or missing number found! Not a valid permutation.\n");

            return;

        }
    }


    printf("Valid Permutation of numbers from 1 to %d\n", n);

}

int main() {

    int arr[] = {2, 1, 4, 3};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int n = 4;

    isPermutation(arr,arr_size,n);


    return 0;
}