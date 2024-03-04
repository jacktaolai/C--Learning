// p62 2-28.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        bool IsPrimeNum = true;
        for (int j = 2; j < i; j++) 
        {
            if (i% j == 0)//除以每一个比他小的数看是否有余数
            {
                IsPrimeNum = false;
                break;
            }
        }
        if (IsPrimeNum)
            cout << i << ' ';
    }
}

