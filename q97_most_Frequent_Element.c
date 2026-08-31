#include <limits.h>
#include <stdio.h>

int most_Frequent_Element(int arr[] , int arr_size) {

    int count[50] = {0};

    int max_val = INT_MIN;

    int ans=INT_MAX;

    for (int i = 0 ; i<arr_size;i++) {

        count[arr[i]]++;
    }

    for (int i = 0; i<arr_size ;i++) {

        if (count[arr[i]] > max_val) {

            max_val = count[arr[i]];

            ans = arr[i];

        }

        else if (max_val == count[arr[i]]) {


            if (arr[i] < ans ) {


                ans = arr[i];


            }
        }


    }

    return ans;


}

int main() {

    int arr[] = {10, 20, 10, 20, 30};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d" ,most_Frequent_Element(arr,arr_size));

    return 0;
}