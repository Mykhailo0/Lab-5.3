#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.3/Lab-5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = j(2);
			Assert::AreEqual(t, 0.252478, 0.00001);
		}
	};
}
