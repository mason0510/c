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
////        //������쳣
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
////        //�����Ĵ���
////    }
////}
////#include "iostream"
////using namespace std;
////int main(){
////    //��ʼ��
////    double *pvalue=NULL;
////    //Ϊ���������ڴ�
////            pvalue=new double;
////            *pvalue=29494.99;
////            cout<<"value of value"<<*pvalue<<endl;
////
////            delete pvalue;//�ͷ��ڴ� �ͷ��ڴ�
////
////    return 0;
////}
////���캯���������Ĵ�
////#include <iostream>
////using namespace std;
////
////class Box
////{
////public:
////    Box() {
////        cout << "���ù��캯����" <<endl;
////    }
////    ~Box() {
////        cout << "��������������" <<endl;
////    }
////};
////
////int main( ) {
////    Box *myBoxArray = new Box[4];
////
////    delete[] myBoxArray; // ɾ������
////}
////�����ռ�
////#include <iostream>
////using namespace std;
////
////// ��һ�������ռ�
////namespace first_space{
////    void func(){
////        cout << "Inside first_space" << endl;
////    }
////}
////// �ڶ��������ռ�
////namespace second_space{
////    void func(){
////        cout << "Inside second_space" << endl;
////    }
////}
////int main ()
////{
////
////    // ���õ�һ�������ռ��еĺ���
////    first_space::func();
////
////    // ���õڶ��������ռ��еĺ���
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
////// ��һ�������ռ�
////namespace first_space{
////    void func(){
////        cout << "Inside first_space" << endl;
////    }
////    // �ڶ��������ռ�
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
////    // ���õڶ��������ռ��еĺ���
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
////    // �����ر�
////    // ��ֹ����
////
////    exit(signum);
////
////}
////
////int main ()
////{
////    // ע���ź� SIGINT ���źŴ������
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
////    // �����ر�
////    // ��ֹ����
////
////    exit(signum);
////
////}
////
////int main ()
////{
////    int i = 0;
////    // ע���ź� SIGINT ���źŴ������
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
////// �����ͷ�ļ�
////#include <pthread.h>
////
////using namespace std;
////
////#define NUM_THREADS 5
////
////// �̵߳����к���
////void* say_hello(void* args)
////{
////    cout << "Hello Runoob��" << endl;
////    return 0;
////}
////
////int main()
////{
////    // �����̵߳� id �������������ʹ������
////    pthread_t tids[NUM_THREADS];
////    for(int i = 0; i < NUM_THREADS; ++i)
////    {
////        //���������ǣ��������߳�id���̲߳��������õĺ���������ĺ�������
////        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
////        if (ret != 0)
////        {
////            cout << "pthread_create error: error_code=" << ret << endl;
////        }
////    }
////    //�ȸ����߳��˳��󣬽��̲Ž������������ǿ�ƽ����ˣ��߳̿��ܻ�û��Ӧ������
////    pthread_exit(NULL);
////}
//
//#include <iostream>
//using namespace std;
//
//int main ()
//{
//    //ǰ����ҳ
//
//    cout << "Content-type:text/html\r\n\r\n";
//    cout << "<html>\n";
//    cout << "<head>\n";
//    cout << "<title>Hello World - ��һ�� CGI ����</title>\n";
//    cout << "</head>\n";
//    cout << "<body>\n";
//    cout << "<h2>Hello World! �����ҵĵ�һ�� CGI ����</h2>\n";
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
    cout << "<title>ʹ�� GET �� POST ����</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";

    form_iterator fi = formData.getElement("first_name");
    if( !fi->isEmpty() && fi != (*formData).end()) {
        cout << "����" << **fi << endl;
    }else{
        cout << "No text entered for first name" << endl;
    }
    cout << "<br/>\n";
    fi = formData.getElement("last_name");
    if( !fi->isEmpty() &&fi != (*formData).end()) {
        cout << "�գ�" << **fi << endl;
    }else{
        cout << "No text entered for last name" << endl;
    }
    cout << "<br/>\n";

    cout << "</body>\n";
    cout << "</html>\n";

    return 0;
}