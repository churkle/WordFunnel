#pragma once
// Generates Word Funnels from a file that contains a list of words separated by newlines

#include <string>;
#include <unordered_map>
#include "WordFunnel.h"

namespace WordFunnelProject
{
	class WordFunnelGenerator
	{
	public:
		WordFunnelGenerator(std::string filePathName);
		~WordFunnelGenerator();
		int GetLongestFunnel(std::string word);

	private:
		std::string filePath = "";
		std::unordered_map<std::string, WordFunnel*> funnels;

		void ReadWordsFromFile();
		void GenerateFunnel(std::string word);
	};
}
