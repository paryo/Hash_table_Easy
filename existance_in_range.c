#include <stdio.h>
#include <stdlib.h>

int* existence_in_range(int arr[] , int arr_size , int L , int R , int *return_size) {

    int mark[10] = {0};

    for (int i= 0 ; i<arr_size ;i++) {

        mark[arr[i]] = 1;
    }

    int *ans = (int*)malloc(arr_size*sizeof(int));

    int k = 0;

    for (int i = L ; i <=R ; i++) {

        if (mark[i] == 0) {

           ans[k] = i;

            k++;
        }
    }

    *return_size = k;

    return ans;

}


int main() {

    int arr[] = {1,5,3};

    int L = 1;

    int R = 5;

    int ans_size;

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int* result = existence_in_range(arr,arr_size,L,R,&ans_size);

    for (int i = 0 ; i<ans_size;i++) {

        printf(" the result is : %d ",result[i]);
    }

    free(result);

    return 0;
}