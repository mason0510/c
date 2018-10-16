//
// Created by admin on 2018/10/16.
//


#include <iostream>
using namespace std;
//全局变量
int g=20;

int main () {
    // 局部变量声明
    int a, b;
    int c;

    // 实际初始化
    a = 10;
    b = 20;
    int g=10;
    c = a + b;

    cout << g;

    return 0;
}