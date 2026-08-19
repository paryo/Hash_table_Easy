#include <stdio.h>

#include <stdbool.h>

bool array_pairs(int arr[] , int arr_size , int target) {

    if (arr_size %2 != 0) {

        return false;
    }

    int count[10] = {0};

    for (int i= 0 ; i<arr_size;i++) {

        count[arr[i]]++;

    }

    for (int i =0 ; i<arr_size;i++) {

        if (count[arr[i]] == 0) {

            continue;
        }

        int compliment = target - arr[i];

        if (compliment >=0 && compliment < 10 &&  count[compliment] > 0) {


            count[arr[i]]--;

            count[compliment]--;

        }

        else {

            return false;


        }






    }

    return true;

}



int main() {

    int arr[] = {1,2,3,4};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int target = 5;

    printf("%d\n", array_pairs(arr, arr_size, target));

    return 0;

}