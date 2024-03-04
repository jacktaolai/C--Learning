#include <iostream>
using namespace std;
int main()
{
    //for (char i = 32; i <= 127; i++)
    //    cout << i;
    //终于明白了这为什么是一个死循环，溢出了，char没有128
 
    //for (int i = 32, char b; i <= 127; i++)
    //{
    //    b = i;
    //    cout << b;
    //}
    //这个也是错的for里面初始化不能定义两个类型不同的变量
    for (int i = 32; i <= 127; i++)
        cout << char(i);

}
