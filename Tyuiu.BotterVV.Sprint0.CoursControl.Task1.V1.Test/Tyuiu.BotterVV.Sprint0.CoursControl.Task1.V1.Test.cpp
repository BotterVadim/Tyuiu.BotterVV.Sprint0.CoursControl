#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BotterVV.Sprint0.CoursControl.Task1.V1.Lib/Tyuiu.BotterVV.Sprint0.CoursControl.Task1.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V0* task1 = new Service1();
			int k = 256;
			int d;

			d = task1->Control(k);

			Assert::AreEqual(60, d);
		}
	};
}
