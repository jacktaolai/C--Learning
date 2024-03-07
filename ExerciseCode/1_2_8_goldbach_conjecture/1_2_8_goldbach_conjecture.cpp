/********************************************
* Copyright (c) 2024，
* All rights reserved.
*
* 文件名称：1_2_8_goldbach_conjecture
* 摘 要：验证4到100哥德巴赫猜想的准确性
*
* 当前版本：1.0
* 作 者：赖鑫涛
* 完成日期：2024年3月7日
* e-mail:jacktaolai@cug.edu.cn
*
* 取代版本：1.0
* 原作者 ：赖鑫涛
* 完成日期：2024年3月7日
*********************************************/

#include <iostream>
using namespace std;

bool IsPrimeNum(int num_to_check) {
    //小于等于1的数不是素数
    if (num_to_check <= 1) {
        return false;
    }

    int possible_factor = 2;
    //用穷举法找出可能的因数
    while (num_to_check > possible_factor) {
        //如果有因数肯定不是素数
        if (num_to_check % possible_factor == 0) {
            return false;
        }
        else possible_factor++;
    }
    return true;

}
int main()
{
    for (int even = 2; even <= 100; even = even + 2) 
    {
        bool decomposition_found = false;//分解数是否被找到
        for (int i = 2; i < even; i++)
        {
            //如果找到了两个素数相加这该偶数可以分解，并输出分解结果
            if (IsPrimeNum(i) && IsPrimeNum(even - i))
            {
                cout << even << '=' << i << '+' << even - i << endl;
                decomposition_found = true;
                break;//只需找到一组分解即可
            }
            
        }
        //如果分解数未找到则猜想不成立
        if (!decomposition_found)
        {
            cout << even << "不能被分解为两个素数的和" << endl;
        }
   }
}
