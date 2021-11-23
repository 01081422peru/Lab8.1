#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../lab8.1/Source.cpp"
#define TESTING
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool t;
			char k[] = { "qwerty***qwerty" };
			t = Change(k);
			Assert::AreEqual(t, true);

		}
	};
}
