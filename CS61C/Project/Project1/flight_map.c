#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "flight_map.h"

// A safe version of malloc, that will exit the program in case your allocation
// fails.
void *checked_malloc(size_t size) {
     void *ptr = malloc(size);
     if (ptr == NULL) {
          fprintf(stderr, "memory allocation failed\n");
          exit(1);
     }
     return ptr;
}

struct map_t {
     // YOUR CODE HERE
};

map_t* map_create() {
     // YOUR CODE HERE
}

void map_free(map_t* map) {
     // YOUR CODE HERE
}

int add_city(map_t* map, const char* name) {
     // YOUR CODE HERE
}

int remove_city(map_t* map, const char* name) {
     // YOUR CODE HERE
}

int num_cities(map_t* map) {
     // YOUR CODE HERE
}

int link_cities(map_t* map, const char* city1_name, const char* city2_name) {
     // YOUR CODE HERE
}

int unlink_cities(map_t* map, const char* city1_name, const char* city2_name) {
     // YOUR CODE HERE
}

const char** linked_cities(map_t* map, const char* city_name) {
     // YOUR CODE HERE
}

const char** find_path(map_t* map, const char* src_name, const char* dst_name) {
     // YOUR CODE HERE
}

void map_export(map_t* map, FILE* f) {
     // YOUR CODE HERE
}

map_t* map_import(FILE* f) {
     // YOUR CODE HERE
     return NULL;
}
