#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 8.2/Laba 8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101];
			char str = 'absc';
			char expected = 1;
			char actual = 0;
			Count(str);
			Assert::AreEqual(expected, actual);
		}
	};
}
