#include "stdafx.h"
#include "CppUnitTest.h"
#include "../WordFunnel/WordFunnelGenerator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace WordFunnelTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		WordFunnelProject::WordFunnelGenerator* CreateWordFunnelGenerator()
		{
			return new WordFunnelProject::WordFunnelGenerator("../WordFunnel/enable1.txt");
		}
		
		TEST_METHOD(TestMethod1)
		{
			WordFunnelProject::WordFunnelGenerator* generator = CreateWordFunnelGenerator();
		}

	};
}