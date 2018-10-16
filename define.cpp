//
// Created by admin on 2018/10/16.
//
//预处理器 用于定义 常量 规范 常量定义成大写字符
//
//#include <iostream>
//using namespace std;
//
//#define LENGTH 10
//#define WIDTH  5
//#define NEWLINE '\n'
//
//int main()
//{
//
//    int area;
//
//    area = LENGTH * WIDTH;
//    cout << area;
//    cout << NEWLINE;
//    return 0;
//}
#include <iostream>
using namespace std;

/*
 * 这个程序演示了有符号整数和无符号整数之间的差别
*/
int main()
{
    short int i;           // 有符号短整数
    short unsigned int j;  // 无符号短整数

    j = 50000;

    i = j;
    cout << i << " " << j;//有符号短整数

    return 0;
}
//原因 无符号被解释成有符号的数 。