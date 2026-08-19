#include <stdio.h>

#include <stdbool.h>

bool check_valid_id(int valid_ids[] , int query_id ,int valid_ids_size) {

    int mark[310] = {0};

    for (int i = 0; i<valid_ids_size ;i++) {

        mark[valid_ids[i]] = 1;
    }

    if (mark[query_id] == 1) {

        return true;
    }

    return false;


}

int main() {

    int valid_ids[] = {102,105,201,305};

    int query_id = 201;

   int valid_ids_size = sizeof(valid_ids)/sizeof(valid_ids[0]);

    printf("%d", check_valid_id(valid_ids,query_id,valid_ids_size));

    return 0;
}