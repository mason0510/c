//
// Created by admin on 2018/10/16.
//

//#include <iostream>
//
//extern int count;
//
//void write_extern(void)
//{
//    std::cout << "Count is " << count << std::endl;
//}

//thread_local int x;  // 命名空间下的全局变量
//class X
//{
//    static thread_local std::string s; // 类的static成员变量
//};
//static thread_local std::string  X::s;  // X::s 是需要定义的
//
//void foo()
//{
//    thread_local std::vector<int> v;  // 本地变量
//}
#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    cout << "Line 1 - c 的值是 " << c << endl ;
    c = a - b;
    cout << "Line 2 - c 的值是 " << c << endl ;
    c = a * b;
    cout << "Line 3 - c 的值是 " << c << endl ;
    c = a / b;
    cout << "Line 4 - c 的值是 " << c << endl ;
    c = a % b;
    cout << "Line 5 - c 的值是 " << c << endl ;

    int d = 10;   //  测试自增、自减
    c = d++;
    cout << "Line 6 - c 的值是 " << c << endl ;

    d = 10;    // 重新赋值
    c = d--;
    cout << "Line 7 - c 的值是 " << c << endl ;
    return 0;
}