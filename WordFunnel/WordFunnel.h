#pragma once
#include <string>

class WordFunnel
{
	public:
		WordFunnel(std::string startingWord);
		~WordFunnel();

	private:
		private std::vector<std::string> wordsInFunnel;

};