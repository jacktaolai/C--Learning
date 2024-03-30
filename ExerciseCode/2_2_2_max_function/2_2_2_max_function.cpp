/********************************************
* Copyright (c) 2024，
* All rights reserved.
*
* 文件名称：2_2_2_max_function.cpp
* 摘 要：定义一个输出最大值的函数
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
using namespace std;
int Max(int a, int b);
int Max(int a, int b, int c);
float Max(float a, float b);
float Max(float a, float b, float c);
//实现两个int类型的比较
int Max(int a, int b) {
    int d = a;
    if (b > d) {
        d = b;
    }
    return d;
}
//实现三个int类型的比较
int Max(int a, int b,int c) {
    int d = a;
    if (b > d) {
        d = b;
    }
    if (c > d) {
        d = c;
    }

    return d;
}
//实现两个float类型的转换
float Max(float a, float b) {
    float d = a;
    if (b > d) {
        d = b;
    }
    return d;
}
//实现三个float数的比较
float Max(float a, float b, float c) {
    float d = a;
    if (b > d) {
        d = b;
    }
    if (c > d) {
        d = c;
    }

    return d;
}
int main(){
    int a = 0, b = 0, c = 0;
    float a2 = 0, b2 = 0, c2 = 0;
    cout << "Please enter two int type numbers:";
    cin >> a >> b;
    cout << "The max number is:" << Max(a, b) << endl;
    cout << "Please enter three int type numbers:";
    cin >> a >> b >> c;
    cout << "The max number is:" << Max(a, b,c) << endl;
    cout << "Please enter two float type numbers:";
    cin >> a2 >> b2;
    cout << "The max number is:" << Max(a2, b2) << endl;
    cout << "Please enter three float type numbers:";
    cin >> a2 >> b2 >> c2;
    cout << "The max number is:" << Max(a2, b2, c2) << endl;
    return 0;
}
