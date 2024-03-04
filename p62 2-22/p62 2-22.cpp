// p62 2-22.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    //cout << a|b-c;
    //上面这种写法为什么是错的呢，因为<<，-的优先级比|高，所以实际上机器是这样理解的：
    //(<<a)|(b-c),所以报错信息说没有定义ostream对|的运算，解决办法也很简单
    cout << (a | b - c)<<endl;
    cout << (a^b&-c)<<endl;
    cout << (a & b | c) << endl;
    cout << (a | b & c);
}

