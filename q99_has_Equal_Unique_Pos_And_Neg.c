#include <stdio.h>

#include <stdbool.h>


bool has_Equal_Unique_Pos_And_Neg(int arr[] , int arr_size) {

    int visited_positive[100] = {0};

    int visited_negative[100] = {0};

    int pos_num = 0;

    int neg_num = 0;


    for (int i=0 ; i <arr_size ; i++) {

        if (arr[i] >0) {


            if (visited_positive[arr[i]] == 0) {

                visited_positive[arr[i]] = 1;

                pos_num++;

            }


        }

        else if (arr[i] <0) {

            int positive_conversation = -arr[i];

            if (visited_negative[positive_conversation] == 0) {

                visited_negative[positive_conversation] = 1;

                neg_num++;
            }


        }




    }

    if (pos_num == neg_num) {

        return true;

    } else {

        return false;
    }




}

int main() {

    int arr[] = {1,-1,1,-1,0};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",has_Equal_Unique_Pos_And_Neg(arr,arr_size));

    return 0;
}