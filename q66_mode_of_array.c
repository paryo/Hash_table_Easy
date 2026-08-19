#include <stdio.h>
#include <stdlib.h>

int* mode_of_array(int arr[] , int arr_size ,int *return_size) {

    int count[10] = {0};

    int max_val = INT_MIN;

    for (int i=0 ; i<arr_size;i++) {

        count[arr[i]]++;

    }

    int* ans = (int*)malloc(arr_size*sizeof(int));

    int k=0;

    for (int i=0 ; i<arr_size;i++) {

        if (count[arr[i]] > max_val) {

            max_val = count[arr[i]];
        }
    }

    for (int i = 0; i < arr_size; i++) {

        if (count[arr[i]] == max_val) {

            ans[k++] = count[arr[i]];

            ans[k++] = arr[i];

            count[arr[i]] = 0;

        }
    }



    *return_size = k;

    return ans;

}


int main() {

    int arr[] = {1, 3, 2, 3, 4, 3, 2, 1};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int ans_size;

    int* result = mode_of_array(arr,arr_size,&ans_size);

    for (int i=0 ; i<ans_size;i++) {

        printf(" %d " ,result[i]);
    }

    free(result);


    return 0;
}