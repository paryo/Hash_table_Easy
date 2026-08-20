#include <limits.h>
#include <stdio.h>

int longest_consecutive_sequence(int arr[] , int arr_size) {

    int mark[201] = {0};

    int curr_len = 0;

    int max_len = INT_MIN;

    for (int i=0 ; i<arr_size;i++) {

        mark[arr[i]] = 1;

    }

    for (int i=0 ; i<201 ;i++) {

        if (mark[i] == 1) {

            curr_len++;

            if (curr_len > max_len) {

                max_len = curr_len;
            }

        }

        else {

            curr_len = 0;
        }

    }

    return max_len;

}


int main() {

    int arr[] = {100, 4, 200, 1, 3, 2};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",longest_consecutive_sequence(arr,arr_size));

    return 0;
}