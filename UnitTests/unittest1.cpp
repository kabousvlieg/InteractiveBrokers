#include "stdafx.h"
#include "CppUnitTest.h"
#include "CppUnitTestAssert.h"
#include "Market.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(CircularMarketAdd)
		{
			Logger::WriteMessage("HalloDaar");
			Assert::Fail(L"Hallo", NULL);

		}

	};
}