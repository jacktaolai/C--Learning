// p63 2-33.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//创建九九乘法表

#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 9; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            if (column < row)
                cout << row << '*' << column <<'=' << row * column << " ";
            else
                cout << row << '*' << column << '=' << row * column << endl;

        }
    }
}

//没考虑位宽一样，下次改进