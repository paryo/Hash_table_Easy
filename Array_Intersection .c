#include <stdio.h>
#include <stdlib.h>

int* array_intersection(int num1[] , int num2[] , int num1_size , int num2_size , int *return_size) {

    int mark[10] = {0};

    for (int i = 0 ; i <num1_size ; i++) {

        mark[num1[i]] = 1;
    }

    int *ans = (int*) malloc(num1_size*sizeof(int));

    int k = 0;

    for (int i = 0 ; i<num2_size;i++) {

        if (mark[num2[i]] == 1) {

            ans[k] = num2[i];

            k++;

            mark[num2[i]] = 0;
        }
    }

    *return_size = k;

    return ans;

}

int main() {

    int nums1[] = {1,2,2,1};

    int nums2[] = {2,2};

    int num1_size = sizeof(nums1)/sizeof(nums1[0]);

    int num2_size = sizeof(nums2)/sizeof(nums2[0]);

    int ans_size;

    int* result = array_intersection(nums1,nums2,num1_size,num2_size,&ans_size);

    for (int i = 0 ; i<ans_size;i++) {

        printf("%d", result[i]);
    }

    free(result);


    return 0;
}