#include <stdio.h>

int id_to_value(int ids[] , int values[] , int target_id , int ids_size , int values_size) {

    int id[105] = {0};

    for (int i=0 ; i<ids_size ; i++) {

        id[ids[i]] = values[i];
    }

    if (id[target_id] != 0) {

        return id[target_id];
    }


return -1;


}

int main() {

    int ids[] = {101,102,103};

    int values[] = {50,80,20};

    int target_id = 102;

    int ids_size = sizeof(ids)/sizeof(ids[0]);

    int values_size = sizeof(values)/sizeof(values[0]);

    printf("%d", id_to_value(ids,values,target_id,ids_size,values_size));

    return 0;
}