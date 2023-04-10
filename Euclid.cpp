#include <stdio.h>
#include <time.h>
#include <iostream>

// 재귀적 최대공약수 알고리즘
long long euclidRecursive(long long a, long long b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return euclidRecursive(b, a % b);
	}

}

// 반복적 최대공약수 알고리즘
long long euclidRepeatitive(long long a, long long b)
{
	long long r;

	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;

}