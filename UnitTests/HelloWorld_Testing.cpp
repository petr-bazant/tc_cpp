#include "stdafx.h"
#include "CppUnitTest.h"
#include <thread>
#include <chrono>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(60000));
			Assert::AreEqual(1, 1);
		}

	};
}