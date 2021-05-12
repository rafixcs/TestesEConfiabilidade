#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

#include <stdlib.h>
#include <string.h>

TEST_GROUP(sort);

TEST_SETUP(sort){

}

TEST_TEAR_DOWN(sort){

}

TEST(sort, TestSort1){
    int v[] = {5,6,7,10,3,4,5,1,6,9,8};
    int size = 11;
    
    qsort(v, size, sizeof(int), comp_int);
    //printf("\n");
    
    for (int i=0; i<size-1; i++) {
        //printf("i: %d\t i+1: %d\n", v[i], v[i+1]);
        if (v[i] != v[i+1])
            TEST_ASSERT_GREATER_THAN(v[i], v[i+1]);
    }
}

TEST(sort, TestSort2) {
    float v[] = {5.2, 6.3, 7.0, 10.0, 3.2, 4.1, 5.5, 1.0, 6.6, 9.3, 8.7};
    int size = 11;
    
    qsort(v, size, sizeof(float), comp_int);
    //printf("\n");
    
    for (int i=size-1; i>0; i--) {
        //printf("i: %d\t i-1: %d\n", v[i], v[i-1]);
        if (v[i] != v[i-1])
            TEST_ASSERT((v[i] > v[i-1]) ? 1:0);
    }
}

TEST(sort, TestSort3) {
    char v[] = {'a', 'd', 'b', 'a'};
    int size = 5;
    
    qsort(v, size, sizeof(char), comp_char);
    //printf("\n");
    
    for (int i=size+1; i<size-2; i++) {
        //printf("i: %c\t i+1: %c\n", v[i], v[i+1]);
        if (v[i] != v[i+1])
            TEST_ASSERT_GREATER_THAN(v[i], v[i+1]);
    }
}

TEST(sort, TestSort4) {
    char *v[] = {"aa", "ee", "dd", "bb"};
    int size = 4;
    
    qsort(v, size, sizeof(char*), comp_str);   
    for (int i=1; i<size-2; i++) {
        if(strcmp(v[i], v[i+1]) != 0)
            TEST_ASSERT((strcmp(v[i], v[i+1]) < 0) ? 1:0);
    }
}