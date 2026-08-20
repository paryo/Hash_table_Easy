#include <stdio.h>
#include <stdlib.h>

int* find_consecutive_k_times(int arr[], int arr_size,int k , int *return_size) {


    int mark[10] = {0};

    int curr_len = 0;

    for (int i=0 ;i<arr_size;i++) {

        mark[arr[i]] = -1;

    }

    int *ans = (int*)malloc(arr_size*sizeof(int));

    int k1=0;


    for (int i=0 ; i<arr_size ;i++) {

        if (i > 0 && arr[i] != arr[i - 1]) {
            mark[arr[i]] = -1;
        }


        if (mark[arr[i]] == -1) {

            mark[arr[i]] = i;

        }

        else {

            int distance = i - mark[arr[i]] +1;

            curr_len++;

            if (distance == k) {

                ans[k1] = arr[i];

                k1++;
            }




        }

    }

    *return_size = k1;

    return ans;

}


int main() {

    int arr[] = {1,1,1,4,4,4,4};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int k =3;

    int ans_size;

    int* result = find_consecutive_k_times(arr,arr_size,k,&ans_size);

    for (int i=0 ; i<ans_size;i++) {

        printf(" %d " , result[i]);
    }

    free(result);



    return 0;
}