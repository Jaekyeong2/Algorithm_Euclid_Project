#include <stdio.h>
#include <time.h>
#include <iostream>

// ����� �ִ����� �˰���
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

// �ݺ��� �ִ����� �˰���
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