#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

#include "table.h"


int main(void) {
    char key[] = "sample-key";
    char key2[] = "sample-key2";
    char value[] = "Item 1";
    char value2[] = "Item 2";
    hash_table_item *found_item;
    hash_table table;
    hash_table_init(&table, 10000);
    printf("prime: %" PRIu64 "\n", table.hash_params.prime);
    hash_table_insert(&table, key, value);
    hash_table_insert(&table, key2, value2);
    found_item = hash_table_search(&table, key);
    printf("%s\n", found_item->value);
    found_item = hash_table_search(&table, key2);
    printf("%s\n", found_item->value);
    return 0;
}
