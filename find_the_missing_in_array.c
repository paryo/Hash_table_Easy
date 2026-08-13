#include <stdio.h>
#include <stdlib.h>

int* find_the_missing(int arr1[] , int arr2[] , int arr1_size, int arr2_size , int *return_size) {


    int mark[10] = {0};

    for (int i = 0 ; i<arr2_size;i++) {

        mark[arr2[i]] = 1;
    }

    int* ans = (int*)malloc(arr1_size*sizeof(int));

    int k = 0;

    for (int i = 0 ; i<arr1_size;i++) {

        if (mark[arr1[i]] !=1) {

            ans[k] = arr1[i];

            k++;

            mark[arr1[i]] = 1;
        }
    }

    *return_size = k;

    return ans;

}


int main() {

    int arr1[] = {1,2,3,5};

    int arr2[] = {2,3,4};

    int arr1_size = sizeof(arr1)/sizeof(arr1[0]);

    int arr2_size = sizeof(arr2)/sizeof(arr2[0]);

    int ans_size;

    int* result = find_the_missing(arr1,arr2,arr1_size,arr2_size,&ans_size);

    for (int i = 0 ; i<ans_size;i++) {

        printf(" %d ", result[i]);
    }

    free(result);

    return 0;
}