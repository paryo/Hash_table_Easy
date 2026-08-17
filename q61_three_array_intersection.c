#include <stdio.h>
#include <stdlib.h>

int* three_intersection(int arr1[] , int arr2[] , int arr3[] , int arr1_size , int arr2_size ,
                        int arr3_size , int *return_size) {

    int mark1[150]={0};

    int mark2[150] = {0};

    int mark3[150] = {0};


    for (int i = 0 ; i<arr1_size ; i++) {

        mark1[arr1[i]] = 1;


    }

    for (int i = 0 ; i<arr2_size ; i++) {

        mark2[arr2[i]] = 1;


    }

    for (int i = 0 ; i<arr3_size ; i++) {

        mark3[arr3[i]] = 1;


    }

    int *ans  = (int*)malloc(2*sizeof(int));

    int k=0;



    for (int i = 0 ; i<150;i++) {

        if (mark1[i] && mark2[i] && mark3[i] == 1 ) {

            ans[k] = i;

            k++;

        }
    }

    *return_size = k;

    return ans;




}

int main() {

    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};

    int arr1_size = sizeof(arr1)/sizeof(arr1[0]);

    int arr2_size = sizeof(arr2)/sizeof(arr2[0]);

    int arr3_size = sizeof(arr3)/sizeof(arr3[0]);

    int ans_size;

    int* result = three_intersection(arr1,arr2,arr3,arr1_size,arr2_size,arr3_size,&ans_size);

    for (int i=0 ; i<ans_size;i++) {

        printf(" %d ",result[i]);
    }

    free(result);

    return 0;
}
