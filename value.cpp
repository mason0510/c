//
// Created by admin on 2018/10/16.
//
//
//#include <iostream>
//using namespace std;
//
//int main ()
//{
//    // ���ֶ���
//    short  s;
//    int    i;
//    long   l;
//    float  f;
//    double d;
//
//    // ���ָ�ֵ
//    s = 10;
//    i = 1000;
//    l = 1000000;
//    f = 230.47;
//    d = 30949.374;
//
//    // �������
//    cout << "short  s :" << s << endl;
//    cout << "int    i :" << i << endl;
//    cout << "long   l :" << l << endl;
//    cout << "float  f :" << f << endl;
//    cout << "double d :" << d << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main ()
//{
//    // ���ֶ���
//    short  s = 10;
//    int    i = -1000;
//    long   l = 100000;
//    float  f = 230.47;
//    double d = 200.374;
//
//    // ��ѧ����
//    cout << "sin(d) :" << sin(d) << endl;
//    cout << "abs(i)  :" << abs(i) << endl;
//    cout << "floor(d) :" << floor(d) << endl;
//    cout << "sqrt(f) :" << sqrt(f) << endl;
//    cout << "pow( d, 2) :" << pow(d, 2) << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//
//int main ()
//{
//    int i,j;
//
//    // ��������
//    srand( (unsigned)time( NULL ) );
//
//    /* ���� 10 ������� */
//    for( i = 0; i < 10; i++ )
//    {
//        // ����ʵ�ʵ������
//        j= rand();
//        cout <<"������� " << j << endl;
//    }
//    //��Ҫָ�����ͺ�����
////    double balance[10];
//    //���Ժ��Դ�С
//    double balance[10]={1000.0,2.0,3.4,7.0,50.0};
//
//        //Ϊĳһ����ֵ
//    balance[4]=50.0;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//#include <iomanip>
//using std::setw;
//
//int main ()
//{
//    int n[ 10 ]; // n ��һ������ 10 ������������
//
//    // ��ʼ������Ԫ��
//    for ( int i = 0; i < 10; i++ )
//    {
//        n[ i ] = i + 100; // ����Ԫ�� i Ϊ i + 100
//    }
//    cout << "Element" << setw( 13 ) << "Value" << endl;
//
//    // ���������ÿ��Ԫ�ص�ֵ
//    for ( int j = 0; j < 10; j++ )
//    {
//        cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
//    }
//
//    return 0;
//}

#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    //��ӭ���鳤��6 ������������Ϸ
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    cout << "Greeting message: ";
    cout <<strlen(greeting)  << endl;
    return 0;
}