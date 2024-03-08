/********************************************
* Copyright (c) 2024，
* All rights reserved.
*
* 文件名称：1_2_9_multiplication_table.cpp
* 摘 要：输出九九乘法表
*
* 当前版本：2.0
* 作 者：赖鑫涛
* 完成日期：2024年3月8日
* e-mail:jacktaolai@cug.edu.cn
*
* 取代版本：1.0
* 原作者 ：赖鑫涛
* 完成日期：2024年3月2日
*********************************************/


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   //定义行
    for (int row = 1; row <= 9; row++)
    {
        //定义列
        for (int column = 1; column <= row; column++)
        {
            if (column < row)
                cout << row << '*' << column << '=' <<setw(2)<< row * column << " ";
            else
                cout << row << '*' << column << '=' << row * column << endl;
                //实现格式化输出,确保你导入了iomainip

        }
    }
}