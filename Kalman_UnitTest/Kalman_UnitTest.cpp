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
			float a = test_matrix_inverse();
			Assert::IsTrue(a >= 1.3);
		}
	};
}
