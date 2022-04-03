#include "unity.h"
#include "parking.h"


void test_parking();
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_parking);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_searchrecords(void)
{
    char name[20]="Amit";
    TEST_ASSERT_EQUAL("Amit", name);
   
}