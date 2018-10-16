//
// Created by admin on 2018/10/16.
//

//#include <iostream>
//using namespace std;
//
//int main()
//{
//   unsigned int a = 60;      // 60 = 0011 1100
//   unsigned int b = 13;      // 13 = 0000 1101
//   int c = 0;
//
//   c = a & b;             // 12 = 0000 1100
//   cout << "Line 1 - c 的值是 " << c << endl ;
//
//   c = a | b;             // 61 = 0011 1101
//   cout << "Line 2 - c 的值是 " << c << endl ;
//
//   c = a ^ b;             // 49 = 0011 0001
//   cout << "Line 3 - c 的值是 " << c << endl ;
//
//   c = ~a;                // -61 = 1100 0011
//   cout << "Line 4 - c 的值是 " << c << endl ;
//
//   c = a << 2;            // 240 = 1111 0000
//   cout << "Line 5 - c 的值是 " << c << endl ;
//
//   c = a >> 2;            // 15 = 0000 1111
//   cout << "Line 6 - c 的值是 " << c << endl ;
//
//   return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//   int a = 21;
//   int c ;
//
//   c =  a;
//   cout << "Line 1 - =  运算符实例，c 的值 = : " <<c<< endl ;
//
//   c +=  a;
//   cout << "Line 2 - += 运算符实例，c 的值 = : " <<c<< endl ;
//
//   c -=  a;
//   cout << "Line 3 - -= 运算符实例，c 的值 = : " <<c<< endl ;
//
//   c *=  a;
//   cout << "Line 4 - *= 运算符实例，c 的值 = : " <<c<< endl ;
//
//   c /=  a;
//   cout << "Line 5 - /= 运算符实例，c 的值 = : " <<c<< endl ;
//
//   c  = 200;
//   c %=  a;
//   cout << "Line 6 - %= 运算符实例，c 的值 = : " <<c<< endl ;
//
//   c <<=  2;
//   cout << "Line 7 - <<= 运算符实例，c 的值 = : " <<c<< endl ;
//
//   c >>=  2;
//   cout << "Line 8 - >>= 运算符实例，c 的值 = : " <<c<< endl ;
//
//   c &=  2;
//   cout << "Line 9 - &= 运算符实例，c 的值 = : " <<c<< endl ;
//
//   c ^=  2;
//   cout << "Line 10 - ^= 运算符实例，c 的值 = : " <<c<< endl ;
//
//   c |=  2;
//   cout << "Line 11 - |= 运算符实例，c 的值 = : " <<c<< endl ;
//
//   return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//   int a = 20;
//   int b = 10;
//   int c = 15;
//   int d = 5;
//   int e;
//
//   e = (a + b) * c / d;      // ( 30 * 15 ) / 5
//   cout << "(a + b) * c / d 的值是 " << e << endl ;
//
//   e = ((a + b) * c) / d;    // (30 * 15 ) / 5
//   cout << "((a + b) * c) / d 的值是 " << e << endl ;
//
//   e = (a + b) * (c / d);   // (30) * (15/5)
//   cout << "(a + b) * (c / d) 的值是 " << e << endl ;
//
//   e = a + (b * c) / d;     //  20 + (150/5)
//   cout << "a + (b * c) / d 的值是 " << e << endl ;
//
//   return 0;
//}
//#include <iostream>
//using namespace std;
//int max(int num1, int num2){
//   int result;
//   if(num1>num2){
//      result=num1;
//   } else{
//      result=num2;
//   }
//   return result;
//}
//
//int main(){
//   //局部
//   int a=100;
//   int b=200;
//   int ret;
//   ret=max(a,b);
//   cout<<"max value is:"<< ret << endl;
//   return 0;
//}

//#include <iostream>
//using namespace std;
//
//int sum(int a, int b=20)
//{
//   int result;
//
//   result = a + b;
//
//   return (result);
//}
//
//int main ()
//{
//   // 局部变量声明
//   int a = 100;
//   int b = 200;
//   int result;
//
//   // 调用函数来添加值
//   result = sum(a, b);
//   cout << "Total value is :" << result << endl;
//
//   // 再次调用函数
//   result = sum(a);
//   cout << "Total value is :" << result << endl;
//
//   return 0;
//}
//#include "iostream"
//#include "cstring"
//using namespace std;
//int main(){
//    char str1[11]="hello";
//    char str2[11]="world";
//    char str3[11];
//    int len;
//    //复制str1到str3
//    strcpy(str3,str1);
//    cout<<"strcpy(str3,str1)："<<str3<<endl;
//
//    //连接 str1到str2
//    strcat(str1,str2);
//    cout<<"strcat(str3,str1)"<<str1<<endl;
//
//    //连接后的总长度
//    len=strlen(str1);
//    cout<<"strlen(str1):"<<len<<endl;
//    return 0;
//
//}
//
//#include "iostream"
//using namespace std;
//int main(){
//    int var1;
//    char var2[10];
//    cout<<"var1变量的地址";
//    cout<<&var1<<endl;
//
//    cout<<"var2变量的地址";
//    cout<<&var2<<endl;
//    return 0;
//}
//
//#include "iostream"
//using namespace std;
//int main(){
//    int var=20;
//    int *ip;//指针声名
//
//    ip=&var;
//
//    cout<<"value of var variable:";
//    cout<<var<<endl;
//
//    //输出指针变量的存储位置
//    cout<<"Address stored in ip variable: ";
//    cout<<ip<<endl;
//
//    //访问指针变量中的存储地址
//    cout<<"Value of *ip variable:";
//    cout<<*ip<<endl;
//    return 0;
//}
//#include "iostream"
//using namespace std;
//int main(){
//    //简单变量
//    int i;
//    double d;
//    //声名引用常量
//    int& r=i;
//    double& s=d;
//    //转型
//    i=5;
//    cout<<"value:"<<i<<endl;
//    cout<<"value:"<<r<<endl;
//    //可以达到写后台的程度
//    d=11.7;
//    cout<<"value of d"<<d<<endl;
//    cout<<"value of d reference"<<s<<endl;
//    return 0;
//}
////时间和日期
//struct tm{
//    int tm_sec;
//    int tm_min;   // 分，范围从 0 到 59
//    int tm_hour;  // 小时，范围从 0 到 23
//    int tm_mday;  // 一月中的第几天，范围从 1 到 31
//    int tm_mon;   // 月，范围从 0 到 11
//    int tm_year;  // 自 1900 年起的年数
//    int tm_wday;  // 一周中的第几天，范围从 0 到 6，从星期日算起
//    int tm_yday;  // 一年中的第几天，范围从 0 到 365，从 1 月 1 日算起
//    int tm_isdst; // 夏令时
//};

//标准库的组成部分

//#include "iostream"
//#include "ctime"
//
//using namespace std;
//
//int  main(){
//    //基于当前系统的时间
//    time_t now=time(0);
//
//    //把now转换为字符串大的形式
//            char* dt=ctime(&now);
//
//     //本地时间日期
//      cout<<"本地时间和日期"<<dt<<endl ;
//
//      //将现在的时间转换为tm的机构
//    tm *gmtm=gmtime(&now);
//    dt=asctime(gmtm);
//    cout<<"时间日期"<<dt<<endl;
//}

//使用结构与tm格式化时间
#include "iostream"
#include "ctime"
using namespace std;
int  main(){
    //基于当前系统时间的日期
    time_t  now=time(0);
    cout<<"1970年到现在的时间"<<now<<endl;

    tm *ltm=localtime(&now);
    //输出tm结构的各个组成部分 使用箭头访问成员组成部分

            cout<<"年"<<1900+ltm->tm_year<<endl;
            cout<<"月"<<1+ltm->tm_mon<<endl;
            cout<<"日"<<ltm->tm_mday<<endl;
            cout<<"时间"<<ltm->tm_hour<<endl;
            cout<<ltm->tm_min<<":";
            cout<<ltm->tm_sec<<endl;


}




