//
// Created by admin on 2018/10/16.
//
//
//#include <iostream>
//using namespace std;
//
//int main ()
//{
//    // 数字定义
//    short  s;
//    int    i;
//    long   l;
//    float  f;
//    double d;
//
//    // 数字赋值
//    s = 10;
//    i = 1000;
//    l = 1000000;
//    f = 230.47;
//    d = 30949.374;
//
//    // 数字输出
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
//    // 数字定义
//    short  s = 10;
//    int    i = -1000;
//    long   l = 100000;
//    float  f = 230.47;
//    double d = 200.374;
//
//    // 数学运算
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
//    // 设置种子
//    srand( (unsigned)time( NULL ) );
//
//    /* 生成 10 个随机数 */
//    for( i = 0; i < 10; i++ )
//    {
//        // 生成实际的随机数
//        j= rand();
//        cout <<"随机数： " << j << endl;
//    }
//    //需要指定类型和数量
////    double balance[10];
//    //可以忽略大小
//    double balance[10]={1000.0,2.0,3.4,7.0,50.0};
//
//        //为某一个赋值
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
//    int n[ 10 ]; // n 是一个包含 10 个整数的数组
//
//    // 初始化数组元素
//    for ( int i = 0; i < 10; i++ )
//    {
//        n[ i ] = i + 100; // 设置元素 i 为 i + 100
//    }
//    cout << "Element" << setw( 13 ) << "Value" << endl;
//
//    // 输出数组中每个元素的值
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
    //欢迎数组长度6 深圳区块链游戏
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    cout << "Greeting message: ";
    cout <<strlen(greeting)  << endl;
    return 0;
}