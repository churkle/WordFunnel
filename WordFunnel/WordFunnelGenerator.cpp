#include <string>
#include <vector>
#include <iostream>
#include <fstream>

#include "WordFunnelGenerator.h"
#include "WordFunnel.h"

namespace WordFunnelProject
{
	WordFunnelGenerator::WordFunnelGenerator(std::string filePathName) : filePath(filePathName)
	{
		ReadWordsFromFile();
	}

	void WordFunnelGenerator::ReadWordsFromFile()
	{
		std::ifstream fileReader;
		fileReader.open(filePath);

		if (!fileReader)
		{
			std::cout << "Error Opening File!";
			return;
		}

		std::string word;
		while (std::getline(fileReader, word))
		{
			funnels.insert(std::pair<const std::string, WordFunnelProject::WordFunnel*>(word, new WordFunnelProject::WordFunnel(word)));
		}
	}

	int WordFunnelGenerator::GetLongestFunnel(std::string word)
	{
		auto funnelIterator = funnels.find(word);
		if (funnelIterator != funnels.end)
		{
			WordFunnelProject::WordFunnel* funnel = funnelIterator->second;

			if (funnel->IsGenerated())
			{
				return funnel->GetLongestFunnelLength();
			}
			
			funnel->GenerateFunnel();
			return funnel->GetLongestFunnelLength();
		}
		else
		{
			std::cout << "Cannot find word in dictionary!" << std::endl;
			return 0;
		}
	}
}



