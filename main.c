#include <stdio.h>
#include <stdlib.h>
#include "Euclid.h"
#include <time.h>
#include using namespace std; //std ���ӽ����̽� ��� 

int main()
{
	int ret = 0, ret1=0;
	long long a, b;

	srand(time(NULL));

	a = (long long)rand()<< 32 | rand() + 4000000000;

	b = (long long)rand() << 32 | rand() + 4000000000;

	printf("%lld %lld\n", a, b);

	printf("����Լ� ���: ");
	ret = euclidRecursive(a, b);
	printf("%d\n", ret);
	printf("�ݺ��Լ� ���: ");
	ret1 = euclidRepeatitive(a, b);
	printf("%d", ret1);
	return 0;
}