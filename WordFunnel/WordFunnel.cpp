#include <string>
#include <vector>

#include "WordFunnel.h"

namespace WordFunnelProject
{
	WordFunnel::WordFunnel(std::string startingWord) : startingWord(startingWord), isGenerated(false), longestFunnelLength(1)
	{

	}

	WordFunnel::~WordFunnel()
	{

	}

	bool WordFunnel::IsGenerated()
	{
		return this->isGenerated;
	}

	int WordFunnel::GetLongestFunnelLength()
	{
		return longestFunnelLength;
	}

	void WordFunnel::GenerateFunnel()
	{

	}
}