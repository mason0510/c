//
// Created by admin on 2018/10/16.
//

#include <iostream>
using namespace std;

extern  int a,b;
extern int c;
extern  float f;

int func();

//定义类型和名称
int  main(){
    //变量定义
    int a,b;
    int c;
    float f;

    //初始化
    a=10;
    b=20;
    c=a+b;
    cout<<c<<endl;

    //f的值
    f=70.0/3.0;
    cout<<f<<endl;

    int i= func();

    return 0;
}

//int func() {
//    return 0;
//}
//int func(){
//    return 0;
//}

//// 函数定义
int func() {
    return 0;
}