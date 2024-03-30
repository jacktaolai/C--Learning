#include <iostream>
#include <string>

class MyStr {
public:
    std::string s;
    std::string b = "b";
    MyStr(std::string _s) : s(_s) {};
    // 应该将 str.s 移动给 s，而不是 b
    MyStr(MyStr&& str) noexcept : s(std::move(str.s)) {};
    void get() {
        std::cout << s << std::endl << b;
    }
    void change() {
        s = "52";
        b = "50";
    }
};

int main() {
    MyStr a("j");
    a.change();
    //此时a(s="52",b="50")
    a.get(); 
    MyStr b(std::move(a)); 
    //此时b(s="52",ta="b");a(s="",b="50")
    std::cout << "这是b";
    b.get(); 
    MyStr &&c = std::move(a); 
    //c(s="",b="50");a(s="",b="50")这是为什么,唯一不理解的就是为什么这里的a没有被销毁？？？？？
    a.change();
    //此时a(s="52",b="50")
    MyStr d = std::move(a);
    //此时d(s="52",ta="b");a(s="",b="50"),也就是说没有&&那编译器会直接去调用移动构造函数的
    std::cout << "这是a";
    a.get(); 
    std::cout << "这是c";
    c.get(); 


    
}
