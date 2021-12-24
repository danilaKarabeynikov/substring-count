#pragma once
#include <iostream>


int SubStrCount(const char *str, const char *subStr);

template<typename wchar_t> int StrCount(const wchar_t *str)
{
	int i = 0;
	for (i; str[i] != '\0'; i++)
	{
		;
	}
	return i;
}

template<typename wchar_t> int SubStrCount(const wchar_t *str, const wchar_t *subStr)
{
	int CountrStr(const char* str);
	int SubStrCount(const char *str, const char *subStr);
	{
		if (str == nullptr || subStr == nullptr)
			return 0;

		int CountElementsInStr = StrCount(str);
		int CountElementsInSubStr = StrCount(subStr);


		size_t z = 0;

		for (size_t i = 0; i < CountElementsInStr; i++)
		{
			size_t k = 0;
			for (int j = 0; j < CountElementsInSubStr; j++)
			{
				if (str[i + j] == subStr[j])
					k++;
			}
			if (k == CountElementsInSubStr)
				z++;
		}
		return z;
	}
}