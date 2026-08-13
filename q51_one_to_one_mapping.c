#include <stdio.h>


#include <stdbool.h>


bool one_to_one_mapping(int num1[], int num2[], int num1_size, int num2_size) {
    int a_to_b[10];


    int b_to_a[10];


    for (int i = 0; i < 10; i++) {
        a_to_b[i] = -1;


        b_to_a[i] = -1;
    }


    for (int i = 0; i < num1_size; i++) {
        if (a_to_b[num1[i]] == -1) {

            a_to_b[num1[i]] = num2[i];

        } else {

            if (a_to_b[num1[i]] != num2[i]) {
                return false;

            }
        }
    }


    for (int i = 0; i < num2_size; i++) {

        if (b_to_a[num2[i]] == -1) {

            b_to_a[num2[i]] = num1[i];

        } else {

            if (b_to_a[num2[i]] != num1[i])


                return false;
        }
    }


    return true;
}


int main() {
    int num1[] = {1, 2, 1};

    int num2[] = {5, 6, 5};


    int num1_size = sizeof(num1) / sizeof(num1[0]);


    int num2_size = sizeof(num2) / sizeof(num2[0]);


    printf("%d" ,one_to_one_mapping(num1,num2,num1_size,num2_size));


    return 0;
}
