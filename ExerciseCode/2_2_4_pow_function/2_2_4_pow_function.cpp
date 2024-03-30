/********************************************
* Copyright (c) 2024，
* All rights reserved.
*
* 文件名称：2_2_4_pow_function.cpp
* 摘 要：使用pow()函数输出x的y次幂
*
* 当前版本：1.0
* 作 者：赖鑫涛
* 完成日期：2024年3月8日
* e-mail:jacktaolai@cug.edu.cn
*
* 取代版本：0.0
* 原作者 ：赖鑫涛
* 完成日期：2024年3月24日
*********************************************/

#include <iostream>
#include<cmath>
using namespace std;
int main(){
    double a = 0, b = 0;
    cout << "Please enter a and b:";
    cin >> a >> b;
    cout << a << "^" << b << " is:" << pow(a, b) << endl;
    return 0;
}

