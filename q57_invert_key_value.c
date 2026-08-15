#include <stdio.h>
#include <stdlib.h>

// Struct to hold paired inverted results

typedef struct {

    int key;
    int value;

}keyValue;

keyValue* invert_key_values(int key[] , int values[] ,int val_size) {

    int val[50] = {0};

    // Step 1: Mapping Inversion (Value -> Key)

    for (int i=0 ; i<val_size;i++) {

        val[values[i]] = key[i];

    }

    // Step 2: Dynamic allocation for Struct Array

    keyValue *ans = (keyValue*)malloc(val_size*sizeof(keyValue));


    for (int i =0 ; i<val_size ;i++) {

        ans[i].key = values[i];

        ans[i].value = val[values[i]];

    }

    return ans;

}

int main() {

    int key[] = {1,2,3,4};

    int values[] = {10,20,30,40};

    int val_size = sizeof(values)/sizeof(values[0]);


    keyValue* result = invert_key_values(key,values,val_size);


    for (int i = 0; i < val_size; i++) {
        printf("New Key: %d  ==>  New Value: %d\n", result[i].key, result[i].value);
    }

    free(result);

    return 0;
}