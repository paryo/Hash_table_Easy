#include <stdio.h>
#include <stdlib.h>

int* dynamic_intersection(int **arrays , int arrays_size , int * col_size ,
                          int *return_size) {

    int frq[150] = {0};

    for (int i=0 ; i<arrays_size ;i++) {

        for (int j=0 ; j<col_size[i] ;j++) {

            if (frq[arrays[i][j]] == i) {

                frq[arrays[i][j]] = i +1;
            }

        }

    }

    int *ans = (int*)malloc(150*sizeof(int));

    int k =0;


    for (int val =0 ; val<150 ;val++) {

        if (frq[val] == arrays_size) {

            ans[k] = val;

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

    int *arrays[] = {arr1,arr2,arr3};

    int col_size[] = {6,5,8};

    int ans_size;

    int* result = dynamic_intersection(arrays,3,col_size,&ans_size);

    for (int i = 0 ;i<ans_size;i++) {

        printf("%d", result[i]);

    }

    free(result);



    return 0;
}