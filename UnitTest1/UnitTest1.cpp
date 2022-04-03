#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1_8oop/Account.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Account t;
			t.SetPerc(0.5);
			double p = t.GetPerc();
			Assert::AreEqual(0.5, p);
		}
	};
}
