/********************************************
* Copyright (c) 2024，
* All rights reserved.
*
* 文件名称：2_2_8_the_greatest_commom_divisor.cpp
* 摘 要：使用递归求斐波那契数列
*
* 当前版本：1.0
* 作 者：赖鑫涛
* 完成日期：2024年3月30日
* e-mail:jacktaolai@cug.edu.cn
*
* 取代版本：0.0
* 原作者 ：赖鑫涛
* 完成日期：2024年3月24日
*********************************************/

int GreatestCommonDivisor(int a, int b) {
    //根据欧几里得算法有
    //gcd(a,0)=a和gcd(a, b) = gcd(b, a % b)
    //gcd即最大公因子
    int c = a;
    while (b != 0) {
        a = b;
        b = c % b;
        c = a;
    }
    return a;
}
#include <iostream>
int main()
{
    int a = 0, b = 0, c = 0, gcd = 0;
    std::cout << "Please enter three numbers:";
    std::cin >> a >> b >> c;
    gcd = GreatestCommonDivisor(c, GreatestCommonDivisor(a, b));
    //三个数的最大公因子等于第三个数与前两数的最大公因子的最大公因子
    //即gcd(a,b,c)=gcd(c,gcd(a,b))
    std::cout << gcd;
}
