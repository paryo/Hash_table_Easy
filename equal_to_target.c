    #include <stdio.h>

    #include <stdbool.h>


    bool equal_to_target(int arr[] , int arr_size , int target) {

        int mark[10] = {0};

        for (int i = 0 ; i<arr_size ;i++) {

            if (target % arr[i] == 0 && mark[target/arr[i]] == 1) {

                printf("Yes pair is found \n");
                return true;
            }

            else {

                mark[arr[i]] = 1;
            }


        }
        printf("no pair not found");

        return false;
    }

    int main() {

        int arr[] = {2,4,3,6};

        int target = 12;

        int arr_size = sizeof(arr)/sizeof(arr[0]);

        printf("%d" , equal_to_target(arr,arr_size,target));

        return 0;
    }