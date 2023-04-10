#include <stdio.h>
#include <stdlib.h>
#include "euclid.h"
#include <time.h>
#include <iostream> 

int main()
{
	long long ret[10000], ret1[10000]; //���, �ݺ��Լ� ��� �޾Ƽ� ���� 

	int i; //�ݺ����� ���� 

	long long a[10000];
	long long b[10000];
	//������ ���� �迭 ���� 

	clock_t start, end, start2, end2; //�ð� ����
	double result, result2; //�ð� ����� ����


	srand(time(NULL)); //�����Լ� �ʱ�ȭ

	for (i = 0; i < 10000; i++) //40�� �̻��� ������ �Ǽ� ����
	{
		a[i] = (long long)rand() << 32 | rand() + 4000000000;
		b[i] = (long long)rand() << 32 | rand() + 4000000000;
	}

	start = clock(); //����Լ� �ð� ���� ����

	for (i = 0; i < 10000; i++) //����Լ� ȣ��
	{
		ret[i] = euclidRecursive(a[i], b[i]);
	}

	end = clock(); //����Լ� �ð� ���� ����
	result = (double)(end - start); //����Լ� ���� �ð� ���

	start2 = clock(); //�ݺ��Լ� �ð� ���� ����

	for (i = 0; i < 10000; i++) //�ݺ��Լ� ȣ��
	{
		ret1[i] = euclidRepeatitive(a[i], b[i]);
	}

	end2 = clock(); //�ݺ��Լ� �ð� ���� ����
	result2 = (double)(end2 - start2); //�ݺ��Լ� ���� �ð� ���

	for (i = 0; i < 10000; i++) //n��° ���ڽ��� ���, �ݺ��Լ� ��� ��� �� ���, �ݺ��Լ� ����� �� ��� ���
	{
		printf("[%d��°] : %lld %lld\n", i + 1, a[i], b[i]);

		printf("����Լ� ���:");
		printf(" %lld, ", ret[i]);

		printf("�ݺ��Լ� ���:");
		printf("%lld, ", ret1[i]);

		printf("�Լ� ����� ��: %d\n", (ret[i] == ret1[i]));
	}

	std::cout << "����Լ� �ð� result: " << ((result) / CLOCKS_PER_SEC) << " seconds, ";
	printf("(%f ms, %f ~ %f)\n", result, (double)end, (double)start);

	std::cout << "�ݺ��Լ� �ð� result: " << ((result2) / CLOCKS_PER_SEC) << " seconds, ";
	printf("(%f ms, %f ~ %f)\n", result2, (double)end2, (double)start2);

	// ���, �ݺ��Լ� �ɸ� �ð� ���

	return 0;
}