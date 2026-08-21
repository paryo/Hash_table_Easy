#include <stdio.h>

#include <stdbool.h>


bool unique_freq(int arr[] , int arr_size) {

    int count[10] = {0};

    int unique_check[10] = {0};

    for (int i=0 ; i<arr_size;i++) {

        count[arr[i]]++;
    }

    for (int i=0 ; i<10 ;i++) {

        if (count[i] >0) {

            int f = count[i];

            if (unique_check[f] == 1) {


                return false;



            }

            else {

                unique_check[f] = 1;
            }


        }


    }

    return true;

}

int main() {

    int arr[] = {1,2,2,3,3,3};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d" , unique_freq(arr,arr_size));

    return 0;
}