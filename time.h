#pragma once
#include <stdio.h>
#include <time.h>
#include <iostream>

int main()
{
    clock_t start, end;
    double result;

    start = clock(); // ���� �ð� ���� ����

    /* ����ð� �����ϰ��� �ϴ� �ڵ� */

    end = clock(); //�ð� ���� ��
    result = (double)(end - start);

    // ��� ���
    std::cout << "result : " << ((result) / CLOCKS_PER_SEC) << " seconds" << end;
    printf("%f", result / CLOCKS_PER_SEC);
    // �Ǵ� cout << "result : " << result << " microseconds" << end;
    // �Ǵ� printf("%f", result);

    return 0;
}