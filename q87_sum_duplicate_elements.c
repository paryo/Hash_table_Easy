#include <stdio.h>

int sum_Of_Duplicates(int arr[] , int arr_size) {

    int count[10] = {0};

    int sum = 0;

    for (int i = 0 ; i<arr_size;i++) {

        if (count[arr[i]] == 0) {

            count[arr[i]] = 1;
        }

        else if (count[arr[i]] == 1) {


            sum+= arr[i];

            count[arr[i]] = -1;
        }
    }


return sum;

}

int main() {

    int arr[] = {1, 2, 3, 2, 4, 3, 5, 3};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",sum_Of_Duplicates(arr,arr_size));

    return 0;
}