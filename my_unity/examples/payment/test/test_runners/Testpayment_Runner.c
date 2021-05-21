#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(payment) {
    RUN_TEST_CASE(payment, TestSort1);
    RUN_TEST_CASE(payment, TestSort2);
    RUN_TEST_CASE(payment, TestSort3);
    RUN_TEST_CASE(payment, TestSort4);
}