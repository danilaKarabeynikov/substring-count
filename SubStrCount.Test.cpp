#include "../Let5Karabejnikov/SubStrCount.hpp"
#include "pch.h"

TEST(FirstTest, ShouldBeEqual)
{
	char arr[] = "aaaaaa";
	char subarr[] = "aa";
	ASSERT_EQ(SubStrCount(arr, subarr), 3);
}

TEST(SecondTest, ShouldBeEqualForWchar)
{
	wchar_t arr[8] = L"aaaaaaa";
	wchar_t subarr[3] = L"aa";
	ASSERT_EQ(SubStrCount(arr, subarr), 6);
}

TEST(ThirdTest, ShouldBeEqualInWord)
{
	char arr[] = "In Moscow have street name by Moscow";
	char subarr[] = "Moscow";
	ASSERT_EQ(SubStrCount(arr, subarr), 2);
}

TEST(FourthTest, ArrBeEqual)
{
	double  arr[5] = { 1,2,3,1 };
	double  subarr[5] = { 3 };
	ASSERT_EQ(SubStrCount(arr, subarr), 1);
}