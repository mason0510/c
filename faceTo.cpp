////
//// Created by admin on 2018/10/16.
////
//
////#include "iostream"
////
////using namespace std;
////int main(){
////    //cout提供公共接口
////    cout<<"hello c++"<<endl;
////    return 0;
////}
//
//#include <iostream>
//using namespace std;
//
//class Adder{
//public:
//    // 构造函数
//    Adder(int i = 0)
//    {
//        total = i;
//    }
//    // 对外的接口
//    void addNum(int number)
//    {
//        total += number;
//    }
//    // 对外的接口
//    int getTotal()
//    {
//        return total;
//    };
//private:
//    // 对外隐藏的数据
//    int total;
//};
//int main( )
//{
//    Adder a;
//
//    a.addNum(10);
//    a.addNum(20);
//    a.addNum(30);
//
//    cout << "Total " << a.getTotal() <<endl;
//    return 0;
//}
//#include "iostream"
//using namespace std;
//class Adder{
//public:
//    //构造函数
//    Adder(int i=0){
//        total=i;
//    }
//    void  addNum(int number){total+=number;}
//    int getTotal(){ return total;};
//private:int total;
//
//};
//
//int main(){
//    Adder a;
//    a.addNum(10);
//    a.addNum(20);
//    a.addNum(30);
//    cout<<"total"<<a.getTotal()<<endl;
//}

//class Box{
//public://虚拟函数
//    virtual double getVolume()=0;
//
//private:
//    double length;//长度
//    double breadth;//宽度
//    double height;//高度
//};

#include <iostream>

using namespace std;

// 基类
class Shape
{
public:
    // 提供接口框架的纯虚函数
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:
    int width;
    int height;
};


// 派生类
class Rectangle: public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};
class Triangle: public Shape
{
public:
    int getArea()
    {
        return (width * height)/2;
    }
};


int main(void)
{
    Rectangle Rect;
    Triangle  Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);
    // 输出对象的面积
    cout << "Total Rectangle area: " << Rect.getArea() << endl;

    Tri.setWidth(5);
    Tri.setHeight(7);
    // 输出对象的面积
    cout << "Total Triangle area: " << Tri.getArea() << endl;

    return 0;
}

