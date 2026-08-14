#include <stdio.h>

int update_in_hashmap(int num1[] , int num2[] , int num1_size , int num2_size) {

    int key[105] = {0};

    for (int i = 0 ; i<num1_size;i++) {

        key[num1[i]] = num2[i];
    }


    for (int i=0 ; i<num1_size;i++) {

        if (key[num1[i]] !=0) {

            return key[num1[i]];
        }
    }


    return -1;

}

int main() {

    int num1[] = {101,102,101};

    int num2[] = {50,80,99};

    int num1_size = sizeof(num1)/sizeof(num1[0]);

    int num2_size = sizeof(num2)/sizeof(num2[0]);

    printf("%d",update_in_hashmap(num1,num2,num1_size,num2_size));

    return 0;
}