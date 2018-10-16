//
// Created by admin on 2018/10/16.
//

//获取当前的时间
#include "iostream"
#include "ctime"
#include "stdlib.h"
#include "stdio.h"
#include "cstring"

using namespace std;
string Get_CurrentDate();

//基本输出 和输入 预定义输出对象是iostream的一个实例。 用来输出字符串。

//int main(){
//    char  str[]="hello c++";
//    cout<<"value of str is"<<str<<endl;
//
//}

//int  main(){
//    //获取输入
//    char  name[50];
//    //输出
//    cout <<"输入名称";
//    cin>>name;
////    输入之后打印
//    cout<<"您的名称是"<<name<<endl;
//}

//标准错误流
//int main(){
//    char str[]="unable to read";
//    cerr<<"error message"<<str<<endl;
//}

//标准日志流
//int main(){
//    char  str[] ="unable to read....";
//    clog<<"error message:"<<str<<endl;
//}

//模板函数
//#include "iostream"
//#include "iomanip"
//using namespace std;
//int main(){
//    //设置左对齐 实数方式
//    cout<<setiosflags(ios::left|ios::showpoint);  // 设左对齐，以一般实数方式显示
//    cout.precision(5);       // 设置除小数点外有五位有效数字
//    cout<<123.456789<<endl;
//    cout.width(10);          // 设置显示域宽10
//    cout.fill('*');          // 在显示区域空白处用*填充
//    cout<<resetiosflags(ios::left);  // 清除状态左对齐
//    cout<<setiosflags(ios::right);   // 设置右对齐
//    cout<<123.456789<<endl;
//    cout<<setiosflags(ios::left|ios::fixed);    // 设左对齐，以固定小数位显示
//    cout.precision(3);    // 设置实数显示三位小数
//    cout<<999.123456<<endl;
//    cout<<resetiosflags(ios::left|ios::fixed);  //清除状态左对齐和定点格式
//    cout<<setiosflags(ios::left|ios::scientific);    //设置左对齐，以科学技术法显示
//    cout.precision(3);   //设置保留三位小数
//    cout<<123.45678<<endl;
//    return 0;
//}

//定义一个struct
//struct Books{
//    char title[50];
//    char author[50];
//    char  subject[100];
//    int book_id;
//} ;
//int main( )
//{
//    Books Book1;        // 定义结构体类型 Books 的变量 Book1
//    Books Book2;        // 定义结构体类型 Books 的变量 Book2
//
//    // Book1 详述
//    strcpy( Book1.title, "C++ 教程");
//    strcpy( Book1.author, "Runoob");
//    strcpy( Book1.subject, "编程语言");
//    Book1.book_id = 12345;
//
//    // Book2 详述
//    strcpy( Book2.title, "CSS 教程");
//    strcpy( Book2.author, "Runoob");
//    strcpy( Book2.subject, "前端技术");
//    Book2.book_id = 12346;
//
//    // 输出 Book1 信息
//    cout << "第一本书标题 : " << Book1.title <<endl;
//    cout << "第一本书作者 : " << Book1.author <<endl;
//    cout << "第一本书类目 : " << Book1.subject <<endl;
//    cout << "第一本书 ID : " << Book1.book_id <<endl;
//
//    // 输出 Book2 信息
//    cout << "第二本书标题 : " << Book2.title <<endl;
//    cout << "第二本书作者 : " << Book2.author <<endl;
//    cout << "第二本书类目 : " << Book2.subject <<endl;
//    cout << "第二本书 ID : " << Book2.book_id <<endl;
//
//    return 0;
//}

//#include "iostream"
//#include "cstring"
//
//using namespace std;
////void printBook(struct Book*book);
//struct Books
//{
//    char  title[50];
//    char  author[50];
//    char  subject[100];
//    int   book_id;
//};
//
//void printBook(struct Books*book){
//    cout<<"标题"<<book->title<<endl;
//    cout<<"作者"<<book->author<<endl;
//    cout<<"类目"<<book->subject<<endl;
//    cout<<"书ID"<<book->book_id<<endl;
//
//}
//
//int main(){
//    Books Book1;
//    Books Book2;
//
//    //第一本书
//    strcpy(Book1.title,"教程");
//    strcpy(Book1.author,"教程");
//    strcpy(Book1.subject,"教程");
//    Book1.book_id=12345;
//
//
//    //第二本书
//    strcpy(Book2.title,"教程");
//    strcpy(Book2.author,"教程");
//    strcpy(Book2.subject,"教程");
//    Book2.book_id=12346;
//
//    //通过地址输出book1信息
//    printBook( &Book1 );
//    printBook( &Book2 );
//    return 0;
//}

//typedef struct Books{
//    char  title[50];
//    char  author[50];
//    char subject[100];
//    int book_id;
//} Books;
////可与i使用Books来定义Books的类型 不需要使用关键字.
//Books Books1,Books2;
//typedef long int*pint32;
////pint32 x,y z;
#include <iostream>

using namespace std;

// 基类
class Shape
{
public:
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

int main(void)
{
    Rectangle Rect;

    Rect.setWidth(5);
    Rect.setHeight(7);

    // 输出对象的面积
    cout << "Total area: " << Rect.getArea() << endl;

    return 0;
}