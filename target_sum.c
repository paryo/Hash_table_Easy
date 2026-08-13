#include <stdio.h>

#include <stdbool.h>

bool target_sum(int num[] , int target,int num_size) {

    int mark[50] = {0};

    for (int i = 0 ; i<num_size;i++) {

        mark[num[i]] = 1;

    }

    for (int i = 0 ; i<num_size ;i++) {

        if (mark[target] == 1) {

            return true;
        }
    }

    return false;



}

int main() {

    int num[] = {10,20,5,40,50};

    int target = 5;

    int num_size = sizeof(num)/sizeof(num[0]);

    printf("%d",target_sum(num,target,num_size));

    return 0;
}