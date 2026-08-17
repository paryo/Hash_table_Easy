#include <stdio.h>

int get_digit_count(int num) {

    if (num == 0) {

        return 1;
    }

    int count = 0;

    while (num >0) {

        count++;
         num = num/10;
    }

    return count;

}

void group_by_digits(int arr[] , int arr_size) {

    int grouping[10][100];

    int count[10] = {0};

    for (int i=0 ;i<arr_size;i++) {

        int key = get_digit_count(arr[i]);

        int idx_buket = count[key];

        grouping[key][idx_buket] = arr[i];

        count[key]++;

    }


    for (int key = 1; key < 10; key++) {

        if (count[key] > 0) {

            printf("Key (%d Digit/s) -> { ", key);

            for (int j = 0; j < count[key]; j++) {

                printf("%d ", grouping[key][j]);
            }
            printf("}\n");
        }

    }
}



int main() {

    int arr[] = {7,42,9,105,83,2};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    group_by_digits(arr,arr_size);

    return 0;
}