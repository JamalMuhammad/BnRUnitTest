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


/**
 * Description of the test case test_ROC_ACL1
 */
_TEST Test_FBTestBoxLift1(void)
{
	instFBBoxLift.diConvTop = 1;
	
	FBBoxLift(&instFBBoxLift);
	
	TEST_ASSERT_EQUAL_INT( 1 ,instFBBoxLift.selectLift);
	
	TEST_DONE;
	
}




/*
B+R UnitTest: This is generated code.
Do not edit! Do not move!
Description: UnitTest Testprogramm infrastructure (TestSet).
LastUpdated: 2023-07-12 11:47:30Z
By B+R UnitTest Helper Version: 2.0.1.59
*/
UNITTEST_FIXTURES(fixtures)
{
	new_TestFixture("Test_FBTestBoxLift1", Test_FBTestBoxLift1), 
};

UNITTEST_CALLER_COMPLETE_EXPLICIT(testSet_FBTestBoxLift, "testSet_FBTestBoxLift", 0, 0, fixtures, 0, 0, 0);

