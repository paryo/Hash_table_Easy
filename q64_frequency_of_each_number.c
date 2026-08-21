#include <stdio.h>
#include <stdlib.h>

int* frq_of_each(int arr[],int arr_size , int *return_size) {

    int count[10] = {0};

    for (int i=0 ; i<arr_size;i++) {

        count[arr[i]]++;
    }

    int *ans = (int*)malloc(arr_size*sizeof(int));

    int k=0;


    for (int i=0 ; i<arr_size;i++) {



            ans[k] = arr[i];

            k++;

            ans[k] = count[arr[i]];

            k++;

            count[arr[i]] = 0;




    }


    *return_size = k;

    return ans;



}





int main() {

    int arr[] = {2, 3, 2, 5, 3, 3, 8, 2};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int ans_size;

    int* result = frq_of_each(arr,arr_size,&ans_size);

    for (int i=0 ; i<ans_size ;i+=2) {

        printf("Element: %d | Freq: %d\n", result[i], result[i+1]);

    }

    free(result);

    return 0;
}