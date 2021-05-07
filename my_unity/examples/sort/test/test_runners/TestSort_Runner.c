#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(sort) {
    RUN_TEST_CASE(sort, TestSort1);
    RUN_TEST_CASE(sort, TestSort2);
}