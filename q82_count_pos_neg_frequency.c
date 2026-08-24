#include <stdio.h>
#include <stdlib.h>


void count_Pos_Neg_Frequencies(int arr[] , int arr_size) {


    int positive_numbers[10] = {0};

    int negative_numbers[10] = {0};

    for (int i=0 ;i <arr_size;i++) {

        if (arr[i] >=0) {

            positive_numbers[arr[i]]++;
        }

        else if (arr[i] <0) {

           negative_numbers[abs(arr[i])]++;

        }

    }

    for (int i = 0 ; i<arr_size ;i++) {


        if (arr[i] >=0  && positive_numbers[arr[i]] >0) {

            printf("Number %d appears %d time(s)\n", arr[i], positive_numbers[arr[i]]);
            positive_numbers[arr[i]] = 0;

        }

        else if (arr[i] <0 && negative_numbers[abs(arr[i])] >0) {

            printf("Number %d appears %d time(s)\n", arr[i], negative_numbers[abs(arr[i])]);
            negative_numbers[abs(arr[i])] = 0;
        }
    }

}




int main() {

    int arr[] = {-2, 3, -2, 5, 3, -1, 0};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    count_Pos_Neg_Frequencies(arr,arr_size);

    return 0;
}