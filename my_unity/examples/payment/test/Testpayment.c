#include "payment.h"
#include "unity.h"
#include "unity_fixture.h"

#include <stdlib.h>
#include <string.h>

TEST_GROUP(payment);

TEST_SETUP(payment){

}

TEST_TEAR_DOWN(payment){

}

TEST(payment, TestPayment1){
    float v=1;
    char s[]="regular";
    //printf("\n Resultado1=> %d \n",payment(v,s));
    TEST_ASSERT((payment(v,s)==0) ? 1:0);
}

TEST(payment, TestPayment2) {
    float v=0;
    char s[]="estudante";
    //printf("\n Resultado1=> %d \n",payment(v,s));
    TEST_ASSERT((payment(v,s)==0) ? 1:0);
}

TEST(payment, TestPayment3) {
    float v=9;
    char s[]="apo sentado";
    TEST_ASSERT((payment(v,s)==0) ? 1:0);
}

TEST(payment, TestPayment4) {
    float v=100000;
    char s[]="VIP";
    TEST_ASSERT((payment(v,s)==0) ? 1:0);    
}

TEST(payment, TestPayment5) {
    float v=9;
    char s[16]="abcdefghijlmnopq";
    TEST_ASSERT((payment(v,s)==0) ? 1:0);    
}

/*
TEST(payment, TestPayment6) {

    char s[]="aposentado";
    TEST_ASSERT((payment("a",s)==0) ? 1:0);
}

TEST(payment, TestPayment7) {

    TEST_ASSERT((payment(13,2021)==0) ? 1:0);
} */
