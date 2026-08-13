#include <stdio.h>

#include <stdbool.h>

bool common_in_both(int nums1[] , int nums2[] , int num1_size , int num2_size) {

    int count[51] = {0};

    for (int i = 0 ; i<num1_size ; i++) {

        count[nums1[i]] = 1;
    }


    for (int i =0 ; i<num2_size ; i++) {

        if (count[nums2[i]] == 1) {

            return true;
        }



    }

    return false;


}



int main() {

int nums1[] = {10,20,25};

int nums2[] = {40,50,25};

    int num1_size = sizeof(nums1)/sizeof(nums1[0]);

    int num2_size = sizeof(nums2)/sizeof(nums2[0]);

    printf("%d",common_in_both(nums1,nums2,num1_size,num2_size));

    return 0;
}