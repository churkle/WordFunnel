#pragma once
// Generates Word Funnels from a file that contains a list of words separated by newlines

#include <string>;
#include <vector>
#include "WordFunnel.h"

class WordFunnelGenerator
{
	public:
		WordFunnelGenerator(std::string filePathName);
		~WordFunnelGenerator();

	private:
		std::string filePath = "";
		std::vector<WordFunnel> funnels;

		void GenerateFunnelsFromFile();
};