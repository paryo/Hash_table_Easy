#include <limits.h>
#include <stdio.h>


int least_Frequent_Element(int arr[] , int arr_size) {

    int count[10] = {0};

    int min_val = INT_MAX;

    int ans=0;

    for (int i =0 ; i<arr_size ;i++) {

        count[arr[i]]++;
    }

    for (int i =0 ; i <arr_size ;i++) {

        if (count[arr[i]] < min_val) {

            min_val = count[arr[i]];

            ans = arr[i];
        }

        else if (min_val == count[arr[i]]) {

            if (arr[i] < ans) {

                ans = arr[i];
            }
        }

    }


    return ans;


}



int main() {

    int arr[] = {9,8,7,6};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",least_Frequent_Element(arr,arr_size));

    return 0;
}