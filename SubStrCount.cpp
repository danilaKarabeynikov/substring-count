#include "stdafx.h"
#include "SubStrCount.hpp"

int SubStrCount(const char *str, const char *subStr)
{
	if (str == nullptr || subStr == nullptr)
		return 0;

	int CountElementsInStr = StrCount(str);
	int CountElementsInSubStr = StrCount(subStr);


	size_t z = 0;

	for (int i = 0; i < CountElementsInStr; i++)
	{
		size_t k = 0;
		for (int j = 0; j < CountElementsInSubStr; j++)
		{
			if (str[i + j] == subStr[j])
				k++;
		}
		if (k == CountElementsInSubStr)
		{
			z++;
			i += CountElementsInSubStr - 1;
		}
	}
	return z;
}