#include <stdio.h>

#include <stdbool.h>

bool is_Frequency_Match(int arr1[], int arr2[], int arr1_size, int arr2_size) {
    int count1[10] = {0};

    int count2[10] = {0};


    for (int i = 0; i < arr1_size; i++) {
        count1[arr1[i]]++;
    }

    for (int i = 0; i < arr2_size; i++) {
        count2[arr2[i]]++;
    }

    for (int i = 0; i < 10; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 2, 5};

    int arr2[] = {2, 1, 5, 3, 2};

    int arr1_size = sizeof(arr1) / sizeof(arr1[0]);

    int arr2_size = sizeof(arr2) / sizeof(arr2[0]);

    printf("%d", is_Frequency_Match(arr1, arr2, arr1_size, arr2_size));

    return 0;
}
