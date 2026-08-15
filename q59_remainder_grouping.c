#include <stdio.h>

void remainder_grouping(int arr[] , int arr_size , int k) {

    int grouping[5][10];

    int count[5] = {0};


    for (int i = 0; i<arr_size;i++) {

        int key = arr[i]%k;

        if (key <0) {

            key+=k;
        }

        int idx_bucket = count[key];

        grouping[key][idx_bucket] = arr[i];

        count[key]++ ;


    }

    for (int i = 0 ; i<k ;i++) {
        if (count[i] > 0) {

            printf("Key (Rem %d) -> { ",i);



            for (int j=0 ; j<count[i] ;j++) {

                printf("%d ",grouping[i][j]);
            }

            printf("}\n");
        }

    }






}

int main() {

    int arr[] = {12, 17, 19, 5, 23, 8};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int k = 5;

   remainder_grouping(arr, arr_size, k);

    return 0;
}