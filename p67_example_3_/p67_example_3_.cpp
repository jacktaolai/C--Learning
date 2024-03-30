#include <iostream>
using namespace std;
//计算pi的值

//这个函数收敛很慢
double ArcTan(double angle) {
    double val = 0;//result
    double e=angle;//分子
    double r=1;//分母
    double ai=e/r;
    while (abs(ai) >= 1.e-15) {
        val += ai;
        e *=-angle*angle ;
        r = r + 2;
        ai = e / r;
    }
    return val;
}
int main(){
    cout <<1<< ArcTan(4);
    
}

