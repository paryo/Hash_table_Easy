#include <limits.h>
#include <stdio.h>

int second_most_frequent(int nums[] , int num_size) {

    int count[10] = {0};

    int first_max = 0;

    int second_max = 0;

  int  res1 = -1;

    int res2 = -1;

    for (int i = 0 ; i<num_size ;i++) {

        count[nums[i]]++;
    }


    for (int i =0 ; i<num_size;i++) {

        if (count[nums[i]] > first_max) {

            second_max = first_max;

            res2 = res1;

            first_max = count[nums[i]];

            res1 = nums[i];


        }

        else if (count[nums[i]] > second_max && count[nums[i]] < first_max) {

            second_max = count[nums[i]];
            res2 = nums[i];
        }



    }

return res2;
}

int main() {

    int nums[] = {1, 1, 1, 2, 2, 3};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    printf("%d", second_most_frequent(nums,num_size));

    return 0;
}