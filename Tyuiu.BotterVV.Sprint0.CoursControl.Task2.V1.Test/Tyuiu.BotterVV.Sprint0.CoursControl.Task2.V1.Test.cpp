#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BotterVV.Sprint0.CoursControl.Task2.V1.Lib/Tyuiu.BotterVV.Sprint0.CoursControl.Task2.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V3* task2 = new Service2();
			float x = 7;
			float y = 2;
			float z = 0;
			int d;

			d = task2->Proizved(x, y, z);

			Assert::AreEqual(7, d);

		}
	};
}