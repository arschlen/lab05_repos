#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.0/project.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace solutiontest
{
	TEST_CLASS(solutiontest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = sum(2, 3);
			Assert::AreEqual(t, 5);
		}
	};
}
