#pragma once
#include <string>

namespace WordFunnelProject
{
	class WordFunnel
	{
	public:
		WordFunnel(std::string startingWord);
		bool IsGenerated();
		int GetLongestFunnelLength();
		void GenerateFunnel();
		~WordFunnel();

	private:
		std::string startingWord;
		bool isGenerated;
		int longestFunnelLength;
		std::vector<std::vector<std::string>> wordsInFunnel;
	};
}