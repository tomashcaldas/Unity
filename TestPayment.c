#include "payment.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(payment);

TEST_SETUP(payment)
{
}

TEST_TEAR_DOWN(payment)
{
}

TEST(payment, TestPayment1) //payment_01.o
{
  // All of these should pass
  float valor = 55432.13;
  char* status = "VIP";
  int resultado = payment(valor, status);
  TEST_ASSERT_EQUAL(0, payment(valor, status));
}

TEST(payment, TestPayment2)
{
  // This test will fail
  float valor = 10111.000001;
  char* status = "";
  int resultado = payment(valor, status);
  TEST_ASSERT_EQUAL(0, payment(valor, status));
}

TEST(payment, TestPayment3) //payment_03.o
{
  // This test will fail
  float valor = 20032.13;
  char* status;
  int resultado = payment(valor, status);
  TEST_ASSERT_EQUAL(0, payment(valor, status));
}

TEST(payment, TestPayment4)
{
  // This test will fail
  float valor = 30032.07;
  char* status = "VIP";
  int resultado = payment(valor, status);
  TEST_ASSERT_EQUAL(0, payment(valor, status));
}

TEST(payment, TestPayment5)
{
  // This test will fail
  float valor = 47801.01;
  char* status = "aposentado";
  int resultado = payment(valor, status);
  TEST_ASSERT_EQUAL(0, payment(valor, status));
}

TEST(payment, TestPayment6) //payment_06.o
{
  // This test will fail
  float valor = 0;
  char* status = "estudante";
  int resultado = payment(valor, status);
  TEST_ASSERT_EQUAL(0, payment(valor, status));
}

TEST(payment, TestPayment7)
{
  // This test will fail
  float valor = 65732.13;
  char* status = "";
  int resultado = payment(valor, status);
  TEST_ASSERT_EQUAL(0, payment(valor, status));
}

TEST(payment, TestPayment8) //payment_08.o
{
  // This test will fail
  float valor = 72001.44;
  char* status = "estudante";
  int resultado = payment(valor, status);
  TEST_ASSERT_EQUAL(0, payment(valor, status));
}

TEST(payment, TestPayment9) //payment_09.o
{
  // This test will fail
  float valor = 81132.33;
  char* status = "iwuebauqwqjahduqihh";
  int resultado = payment(valor, status);
  TEST_ASSERT_EQUAL(0, payment(valor, status));
}

TEST(payment, TestPayment10) //payment_10.o
{
  // This test will fail
  float valor = 99273.11;
  char* status = "irregular";
  int resultado = payment(valor, status);
  TEST_ASSERT_EQUAL(0, payment(valor, status));
}
