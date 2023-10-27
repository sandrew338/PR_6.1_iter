#include "pch.h"
#include "CppUnitTest.h"
#include "..\main.cpp"
//B:\documents\codding\c++\source\repos\univer(labs)\AP\PR_6.1\main.cpp
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		int arr[25] = { 5, 20, 46, 15, 8, 72, 60, 12, 11, 22, 68, 40, 9, 25, 48, 25, 27, 13, 39, 57, 47, 57, 54, 20, 17 };
		int sum = 0, quantity = 0;
		TEST_METHOD(TestMethod1)
		{
			RewritingArray(arr, 25, 6, 5, sum, quantity);
			Assert::AreEqual(sum, 672);
		}
		TEST_METHOD(TestMethod2)
		{
			RewritingArray(arr, 25, 6, 5, sum, quantity);
			Assert::AreEqual(quantity, 21);
		}
	};
}
