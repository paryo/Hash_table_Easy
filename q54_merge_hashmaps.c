#include <stdio.h>
#include <stdlib.h>

int* merge_hash_maps(int arr1[] , int arr2[] , int values1[] , int values2[] , int * return_size ,

                     int s1,int s2) {

    int key1[10] = {0};


    for (int i = 0 ; i<s1 ; i++) {

        key1[arr1[i]] = values1[i];

    }




    int *ans = (int*) malloc((s1+s2)*sizeof(int));

    int k = 0;


    for (int i = 0 ; i<s2 ; i++) {

        if (key1[arr2[i]] !=0) {

            key1[arr2[i]] += values2[i];

        }

        else {

           key1[arr2[i]] = values2[i];


        }


    }

    for (int i = 0; i < 10; i++) {
        if (key1[i] > 0) {
            ans[k++] = key1[i];
        }
    }

    *return_size = k;

    return  ans;



}

int main() {

    int arr1[] = {1, 2}, values1[] = {10, 20};
    int arr2[] = {2, 3}, values2[] = {15, 30};

    int s1 = sizeof(arr1) / sizeof(arr1[0]);
    int s2 = sizeof(arr2) / sizeof(arr2[0]);

    int ans_size;

    int *result = merge_hash_maps(arr1,arr2,values1,values2,&ans_size,s1,s2);

    for (int i = 0 ;i < ans_size; i++) {

        printf(" %d ",result[i]);

    }


    free(result);



    return 0;
}