////
//// Created by admin on 2018/10/16.
////
//
////#include <iostream>
////using namespace std;
////
////double division(int a, int b)
////{
////    if( b == 0 )
////    {
////        //捕获该异常
////        throw "Division by zero condition!";
////    }
////    return (a/b);
////}
////
////int main ()
////{
////    int x = 50;
////    int y = 0;
////    double z = 0;
////
////    try {
////        z = division(x, y);
////        cout << z << endl;
////    }catch (const char* msg) {
////        cerr << msg << endl;
////    }
////
////    return 0;
////}
//
////#include <iostream>
////#include <exception>
////using namespace std;
////
////struct MyException : public exception
////{
////    const char * what () const throw ()
////    {
////        return "C++ Exception";
////    }
////};
////
////int main()
////{
////    try
////    {
////        throw MyException();
////    }
////    catch(MyException& e)
////    {
////        std::cout << "MyException caught" << std::endl;
////        std::cout << e.what() << std::endl;
////    }
////    catch(std::exception& e)
////    {
////        //其他的错误
////    }
////}
////#include "iostream"
////using namespace std;
////int main(){
////    //初始化
////    double *pvalue=NULL;
////    //为变量请求内存
////            pvalue=new double;
////            *pvalue=29494.99;
////            cout<<"value of value"<<*pvalue<<endl;
////
////            delete pvalue;//释放内存 释放内存
////
////    return 0;
////}
////构造函数被调用四次
////#include <iostream>
////using namespace std;
////
////class Box
////{
////public:
////    Box() {
////        cout << "调用构造函数！" <<endl;
////    }
////    ~Box() {
////        cout << "调用析构函数！" <<endl;
////    }
////};
////
////int main( ) {
////    Box *myBoxArray = new Box[4];
////
////    delete[] myBoxArray; // 删除数组
////}
////命名空间
////#include <iostream>
////using namespace std;
////
////// 第一个命名空间
////namespace first_space{
////    void func(){
////        cout << "Inside first_space" << endl;
////    }
////}
////// 第二个命名空间
////namespace second_space{
////    void func(){
////        cout << "Inside second_space" << endl;
////    }
////}
////int main ()
////{
////
////    // 调用第一个命名空间中的函数
////    first_space::func();
////
////    // 调用第二个命名空间中的函数
////    second_space::func();
////
////    return 0;
////}
//
////#include <iostream>
////using std::cout;
////
////int main ()
////{
////
////    cout << "std::endl is used with std!" << std::endl;
////
////    return 0;
////}
////#include <iostream>
////using namespace std;
////
////// 第一个命名空间
////namespace first_space{
////    void func(){
////        cout << "Inside first_space" << endl;
////    }
////    // 第二个命名空间
////    namespace second_space{
////        void func(){
////            cout << "Inside second_space" << endl;
////        }
////    }
////}
////using namespace first_space::second_space;
////int main ()
////{
////
////    // 调用第二个命名空间中的函数
////    func();
////
////    return 0;
////}
////#include <iostream>
////using namespace std;
////
////#define MKSTR( x ) #x
////
////int main ()
////{
////    cout << MKSTR(HELLO C++) << endl;
////
////    return 0;
////}
////
//
////#include <iostream>
////#include <csignal>
////#include <unistd.h>
////
////using namespace std;
////
////void signalHandler( int signum )
////{
////    cout << "Interrupt signal (" << signum << ") received.\n";
////
////    // 清理并关闭
////    // 终止程序
////
////    exit(signum);
////
////}
////
////int main ()
////{
////    // 注册信号 SIGINT 和信号处理程序
////    signal(SIGINT, signalHandler);
////
////    while(1){
////        cout << "Going to sleep...." << endl;
////        sleep(1);
////    }
////
////    return 0;
////}
////#include <iostream>
////#include <csignal>
////#include <unistd.h>
////
////using namespace std;
////
////void signalHandler( int signum )
////{
////    cout << "Interrupt signal (" << signum << ") received.\n";
////
////    // 清理并关闭
////    // 终止程序
////
////    exit(signum);
////
////}
////
////int main ()
////{
////    int i = 0;
////    // 注册信号 SIGINT 和信号处理程序
////    signal(SIGINT, signalHandler);
////
////    while(++i){
////        cout << "Going to sleep...." << endl;
////        if( i == 3 ){
////            raise( SIGINT);
////        }
////        sleep(1);
////    }
////
////    return 0;
////}
////
////#include <iostream>
////// 必须的头文件
////#include <pthread.h>
////
////using namespace std;
////
////#define NUM_THREADS 5
////
////// 线程的运行函数
////void* say_hello(void* args)
////{
////    cout << "Hello Runoob！" << endl;
////    return 0;
////}
////
////int main()
////{
////    // 定义线程的 id 变量，多个变量使用数组
////    pthread_t tids[NUM_THREADS];
////    for(int i = 0; i < NUM_THREADS; ++i)
////    {
////        //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
////        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
////        if (ret != 0)
////        {
////            cout << "pthread_create error: error_code=" << ret << endl;
////        }
////    }
////    //等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
////    pthread_exit(NULL);
////}
//
//#include <iostream>
//using namespace std;
//
//int main ()
//{
//    //前端网页
//
//    cout << "Content-type:text/html\r\n\r\n";
//    cout << "<html>\n";
//    cout << "<head>\n";
//    cout << "<title>Hello World - 第一个 CGI 程序</title>\n";
//    cout << "</head>\n";
//    cout << "<body>\n";
//    cout << "<h2>Hello World! 这是我的第一个 CGI 程序</h2>\n";
//    cout << "</body>\n";
//    cout << "</html>\n";
//
//    return 0;
//}
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>

#include <cgicc/CgiDefs.h>
#include <cgicc/Cgicc.h>
#include <cgicc/HTTPHTMLHeader.h>
#include <cgicc/HTMLClasses.h>

using namespace std;
using namespace cgicc;

int main ()
{
    Cgicc formData;

    cout << "Content-type:text/html\r\n\r\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>使用 GET 和 POST 方法</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";

    form_iterator fi = formData.getElement("first_name");
    if( !fi->isEmpty() && fi != (*formData).end()) {
        cout << "名：" << **fi << endl;
    }else{
        cout << "No text entered for first name" << endl;
    }
    cout << "<br/>\n";
    fi = formData.getElement("last_name");
    if( !fi->isEmpty() &&fi != (*formData).end()) {
        cout << "姓：" << **fi << endl;
    }else{
        cout << "No text entered for last name" << endl;
    }
    cout << "<br/>\n";

    cout << "</body>\n";
    cout << "</html>\n";

    return 0;
}