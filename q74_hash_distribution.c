#include <stdio.h>

int hash_distribution(int arr[] , int arr_size , int M) {

    int hash_table[10];

    for (int i=0 ; i<10;i++) {

        hash_table[i] = -1;

    }

    for (int i = 0 ; i<arr_size;i++) {

        int idx = arr[i] %M;


        if (hash_table[idx] == -1) {

            hash_table[idx] = arr[i];


        }

        else if (hash_table[idx] != -1) {

            printf( "Collision detected at index %d for key %d "
                    "(Existing key: %d)\n", idx, arr[i], hash_table[idx]);


            return 0;


        }

    }


    return 1;
}

int main() {

    int arr[] = {12, 25, 37, 12};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int M = 10;

    printf("%d",hash_distribution(arr,arr_size,M));

    return 0;
}