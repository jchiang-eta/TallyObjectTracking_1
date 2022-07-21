#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace KalmanUnitTest
{
	TEST_CLASS(KalmanUnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = simple_test();
			Assert::AreEqual(a, 1);
		}
	};
}
