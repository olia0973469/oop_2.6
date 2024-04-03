#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_2.6/Alcohol.h"
#include "../oop_2.6/Alcohol.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Alcohol::Liquid liquid("Vodka", 0.789);
			Alcohol alcohol("Vodka", 0.789, 0.7);
			Assert::AreEqual("Vodka", alcohol.getLiquid().getName().c_str());
			Assert::AreEqual(0.789, alcohol.getLiquid().getDensity());
			Assert::AreEqual(0.7, alcohol.getVolume());
		}
	};
}
