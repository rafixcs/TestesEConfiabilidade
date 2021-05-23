#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(payment) {
    RUN_TEST_CASE(payment, TestPayment1);
    RUN_TEST_CASE(payment, TestPayment2);
    RUN_TEST_CASE(payment, TestPayment3);
    RUN_TEST_CASE(payment, TestPayment4); 
    RUN_TEST_CASE(payment, TestPayment5);
    RUN_TEST_CASE(payment, TestPayment6);
    RUN_TEST_CASE(payment, TestPayment7); 
}
