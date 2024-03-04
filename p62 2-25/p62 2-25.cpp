// p62 2-25.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    char answer;
    do
    {
        cout << "Is it raining now?(Y or N)\n";
        //原来我是在这里定义answer的，但是在这里定义有命名空间md
        cin >> answer;
        if (answer == 'Y')//尤其注意此处不能用双引号，因为在C++里双引号代表string，char是单个字符不能与之比较
            cout << "It is raining now\n";
        if (answer == 'N')
            cout << "It is not raining now\n";
        cout << answer;
    } while (answer != 'Y' && answer!='N');
    /*
    如果你的程序期望接收一个单个字符作为输入，但是你键入了 "SSS"，情况会取决于你的输入方式以及程序的实现。

        在C++中，如果你使用 cin 来读取一个字符，它会读取输入中的第一个字符，并将其存储在你指定的变量中。而在你的程序中，你使用了 cin >> answer 来读取输入到 answer 变量中，其中 answer 是一个 char 类型的变量。

        当你键入 "SSS" 时，cin 会尝试将 "SSS" 中的第一个字符（'S'）读取到 answer 变量中，而 "SSS" 中的其他字符将留在输入缓冲区中等待下一个输入操作。

        如果你的程序只需要接受单个字符作为输入，而用户输入了多个字符，那么后续的字符会在接下来的输入操作中被处理，可能会导致程序行为出现意外。

        因此，在这种情况下，你的程序可能会继续执行，而输入 "SSS" 的第一个字符 'S' 会被存储在 answer 中。
    */
    //所以在键入SSS进入三次循环
    //泪目了，终于找到了错误



    
}
