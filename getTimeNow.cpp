//
// Created by admin on 2018/10/16.
//

//��ȡ��ǰ��ʱ��
#include "iostream"
#include "ctime"
#include "stdlib.h"
#include "stdio.h"
#include "cstring"

using namespace std;
string Get_CurrentDate();

//������� ������ Ԥ�������������iostream��һ��ʵ���� ��������ַ�����

//int main(){
//    char  str[]="hello c++";
//    cout<<"value of str is"<<str<<endl;
//
//}

//int  main(){
//    //��ȡ����
//    char  name[50];
//    //���
//    cout <<"��������";
//    cin>>name;
////    ����֮���ӡ
//    cout<<"����������"<<name<<endl;
//}

//��׼������
//int main(){
//    char str[]="unable to read";
//    cerr<<"error message"<<str<<endl;
//}

//��׼��־��
//int main(){
//    char  str[] ="unable to read....";
//    clog<<"error message:"<<str<<endl;
//}

//ģ�庯��
//#include "iostream"
//#include "iomanip"
//using namespace std;
//int main(){
//    //��������� ʵ����ʽ
//    cout<<setiosflags(ios::left|ios::showpoint);  // ������룬��һ��ʵ����ʽ��ʾ
//    cout.precision(5);       // ���ó�С����������λ��Ч����
//    cout<<123.456789<<endl;
//    cout.width(10);          // ������ʾ���10
//    cout.fill('*');          // ����ʾ����հ״���*���
//    cout<<resetiosflags(ios::left);  // ���״̬�����
//    cout<<setiosflags(ios::right);   // �����Ҷ���
//    cout<<123.456789<<endl;
//    cout<<setiosflags(ios::left|ios::fixed);    // ������룬�Թ̶�С��λ��ʾ
//    cout.precision(3);    // ����ʵ����ʾ��λС��
//    cout<<999.123456<<endl;
//    cout<<resetiosflags(ios::left|ios::fixed);  //���״̬�����Ͷ����ʽ
//    cout<<setiosflags(ios::left|ios::scientific);    //��������룬�Կ�ѧ��������ʾ
//    cout.precision(3);   //���ñ�����λС��
//    cout<<123.45678<<endl;
//    return 0;
//}

//����һ��struct
//struct Books{
//    char title[50];
//    char author[50];
//    char  subject[100];
//    int book_id;
//} ;
//int main( )
//{
//    Books Book1;        // ����ṹ������ Books �ı��� Book1
//    Books Book2;        // ����ṹ������ Books �ı��� Book2
//
//    // Book1 ����
//    strcpy( Book1.title, "C++ �̳�");
//    strcpy( Book1.author, "Runoob");
//    strcpy( Book1.subject, "�������");
//    Book1.book_id = 12345;
//
//    // Book2 ����
//    strcpy( Book2.title, "CSS �̳�");
//    strcpy( Book2.author, "Runoob");
//    strcpy( Book2.subject, "ǰ�˼���");
//    Book2.book_id = 12346;
//
//    // ��� Book1 ��Ϣ
//    cout << "��һ������� : " << Book1.title <<endl;
//    cout << "��һ�������� : " << Book1.author <<endl;
//    cout << "��һ������Ŀ : " << Book1.subject <<endl;
//    cout << "��һ���� ID : " << Book1.book_id <<endl;
//
//    // ��� Book2 ��Ϣ
//    cout << "�ڶ�������� : " << Book2.title <<endl;
//    cout << "�ڶ��������� : " << Book2.author <<endl;
//    cout << "�ڶ�������Ŀ : " << Book2.subject <<endl;
//    cout << "�ڶ����� ID : " << Book2.book_id <<endl;
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
//    cout<<"����"<<book->title<<endl;
//    cout<<"����"<<book->author<<endl;
//    cout<<"��Ŀ"<<book->subject<<endl;
//    cout<<"��ID"<<book->book_id<<endl;
//
//}
//
//int main(){
//    Books Book1;
//    Books Book2;
//
//    //��һ����
//    strcpy(Book1.title,"�̳�");
//    strcpy(Book1.author,"�̳�");
//    strcpy(Book1.subject,"�̳�");
//    Book1.book_id=12345;
//
//
//    //�ڶ�����
//    strcpy(Book2.title,"�̳�");
//    strcpy(Book2.author,"�̳�");
//    strcpy(Book2.subject,"�̳�");
//    Book2.book_id=12346;
//
//    //ͨ����ַ���book1��Ϣ
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
////����iʹ��Books������Books������ ����Ҫʹ�ùؼ���.
//Books Books1,Books2;
//typedef long int*pint32;
////pint32 x,y z;
#include <iostream>

using namespace std;

// ����
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

// ������
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

    // �����������
    cout << "Total area: " << Rect.getArea() << endl;

    return 0;
}