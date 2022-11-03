#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab05_3/Lab05_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = s(1);
			Assert::AreEqual(t, 3.98858, 0.001);
		}
	};
}
