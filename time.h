#pragma once
#include <stdio.h>
#include <time.h>
#include <iostream>

int main()
{
    clock_t start, end;
    double result;

    start = clock(); // 수행 시간 측정 시작

    /* 수행시간 측정하고자 하는 코드 */

    end = clock(); //시간 측정 끝
    result = (double)(end - start);

    // 결과 출력
    std::cout << "result : " << ((result) / CLOCKS_PER_SEC) << " seconds" << end;
    printf("%f", result / CLOCKS_PER_SEC);
    // 또는 cout << "result : " << result << " microseconds" << end;
    // 또는 printf("%f", result);

    return 0;
}