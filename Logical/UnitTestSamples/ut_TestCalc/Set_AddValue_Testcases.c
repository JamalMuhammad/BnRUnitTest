/********************************************************************
 * COPYRIGHT --
 ********************************************************************
 * Program: -
 * Author:
 * Created: 
 ********************************************************************
 * Tests for ... 
 ********************************************************************/

#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

#include "UnitTest.h"




_TEST testcase1(void)
{
	TEST_ASSERT_EQUAL_INT( 7 ,FCAddValue(3,4));
	//TEST_FAIL("My Test AddValue is failed");
		/* test is done */
	TEST_DONE;
}




/*
B+R UnitTest: This is generated code.
Do not edit! Do not move!
Description: UnitTest Testprogramm infrastructure (TestSet).
LastUpdated: 2023-07-07 12:50:17Z
By B+R UnitTest Helper Version: 2.0.1.59
*/
UNITTEST_FIXTURES(fixtures)
{
	new_TestFixture("testcase1", testcase1), 
};

UNITTEST_CALLER_COMPLETE_EXPLICIT(Set_AddValue_Testcases, "Set_AddValue_Testcases", 0, 0, fixtures, 0, 0, 0);

