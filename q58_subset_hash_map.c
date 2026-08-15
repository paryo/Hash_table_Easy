#include <stdio.h>

#include <stdbool.h>

typedef struct {

    int key;
    int value;


}key_value;




bool subset_hash(key_value mapA[] , key_value mapB[] , int mapA_size , int mapB_size) {


    int mark[55] = {0};

    for (int i = 0 ; i<mapB_size ;i++) {

        mark[mapB[i].key] = mapB[i].value;

    }

    for (int i = 0 ; i<mapA_size;i++) {

        if (mark[mapA[i].key] != mapA[i].value) {

            return false;
        }

    }

    return true;




}

int main() {

    key_value mapA[] = {{1,10} , {5,50}};

    key_value mapB[] = {{ 1,10},{2,20} ,{3,30}};

    int mapA_size = sizeof(mapA)/sizeof(mapA[0]);

    int mapB_size = sizeof(mapB)/sizeof(mapB[0]);

    printf("%d", subset_hash(mapA,mapB , mapA_size,mapB_size));

    return 0;
}