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
//   cout << "Line 1 - c ��ֵ�� " << c << endl ;
//
//   c = a | b;             // 61 = 0011 1101
//   cout << "Line 2 - c ��ֵ�� " << c << endl ;
//
//   c = a ^ b;             // 49 = 0011 0001
//   cout << "Line 3 - c ��ֵ�� " << c << endl ;
//
//   c = ~a;                // -61 = 1100 0011
//   cout << "Line 4 - c ��ֵ�� " << c << endl ;
//
//   c = a << 2;            // 240 = 1111 0000
//   cout << "Line 5 - c ��ֵ�� " << c << endl ;
//
//   c = a >> 2;            // 15 = 0000 1111
//   cout << "Line 6 - c ��ֵ�� " << c << endl ;
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
//   cout << "Line 1 - =  �����ʵ����c ��ֵ = : " <<c<< endl ;
//
//   c +=  a;
//   cout << "Line 2 - += �����ʵ����c ��ֵ = : " <<c<< endl ;
//
//   c -=  a;
//   cout << "Line 3 - -= �����ʵ����c ��ֵ = : " <<c<< endl ;
//
//   c *=  a;
//   cout << "Line 4 - *= �����ʵ����c ��ֵ = : " <<c<< endl ;
//
//   c /=  a;
//   cout << "Line 5 - /= �����ʵ����c ��ֵ = : " <<c<< endl ;
//
//   c  = 200;
//   c %=  a;
//   cout << "Line 6 - %= �����ʵ����c ��ֵ = : " <<c<< endl ;
//
//   c <<=  2;
//   cout << "Line 7 - <<= �����ʵ����c ��ֵ = : " <<c<< endl ;
//
//   c >>=  2;
//   cout << "Line 8 - >>= �����ʵ����c ��ֵ = : " <<c<< endl ;
//
//   c &=  2;
//   cout << "Line 9 - &= �����ʵ����c ��ֵ = : " <<c<< endl ;
//
//   c ^=  2;
//   cout << "Line 10 - ^= �����ʵ����c ��ֵ = : " <<c<< endl ;
//
//   c |=  2;
//   cout << "Line 11 - |= �����ʵ����c ��ֵ = : " <<c<< endl ;
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
//   cout << "(a + b) * c / d ��ֵ�� " << e << endl ;
//
//   e = ((a + b) * c) / d;    // (30 * 15 ) / 5
//   cout << "((a + b) * c) / d ��ֵ�� " << e << endl ;
//
//   e = (a + b) * (c / d);   // (30) * (15/5)
//   cout << "(a + b) * (c / d) ��ֵ�� " << e << endl ;
//
//   e = a + (b * c) / d;     //  20 + (150/5)
//   cout << "a + (b * c) / d ��ֵ�� " << e << endl ;
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
//   //�ֲ�
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
//   // �ֲ���������
//   int a = 100;
//   int b = 200;
//   int result;
//
//   // ���ú��������ֵ
//   result = sum(a, b);
//   cout << "Total value is :" << result << endl;
//
//   // �ٴε��ú���
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
//    //����str1��str3
//    strcpy(str3,str1);
//    cout<<"strcpy(str3,str1)��"<<str3<<endl;
//
//    //���� str1��str2
//    strcat(str1,str2);
//    cout<<"strcat(str3,str1)"<<str1<<endl;
//
//    //���Ӻ���ܳ���
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
//    cout<<"var1�����ĵ�ַ";
//    cout<<&var1<<endl;
//
//    cout<<"var2�����ĵ�ַ";
//    cout<<&var2<<endl;
//    return 0;
//}
//
//#include "iostream"
//using namespace std;
//int main(){
//    int var=20;
//    int *ip;//ָ������
//
//    ip=&var;
//
//    cout<<"value of var variable:";
//    cout<<var<<endl;
//
//    //���ָ������Ĵ洢λ��
//    cout<<"Address stored in ip variable: ";
//    cout<<ip<<endl;
//
//    //����ָ������еĴ洢��ַ
//    cout<<"Value of *ip variable:";
//    cout<<*ip<<endl;
//    return 0;
//}
//#include "iostream"
//using namespace std;
//int main(){
//    //�򵥱���
//    int i;
//    double d;
//    //�������ó���
//    int& r=i;
//    double& s=d;
//    //ת��
//    i=5;
//    cout<<"value:"<<i<<endl;
//    cout<<"value:"<<r<<endl;
//    //���Դﵽд��̨�ĳ̶�
//    d=11.7;
//    cout<<"value of d"<<d<<endl;
//    cout<<"value of d reference"<<s<<endl;
//    return 0;
//}
////ʱ�������
//struct tm{
//    int tm_sec;
//    int tm_min;   // �֣���Χ�� 0 �� 59
//    int tm_hour;  // Сʱ����Χ�� 0 �� 23
//    int tm_mday;  // һ���еĵڼ��죬��Χ�� 1 �� 31
//    int tm_mon;   // �£���Χ�� 0 �� 11
//    int tm_year;  // �� 1900 ���������
//    int tm_wday;  // һ���еĵڼ��죬��Χ�� 0 �� 6��������������
//    int tm_yday;  // һ���еĵڼ��죬��Χ�� 0 �� 365���� 1 �� 1 ������
//    int tm_isdst; // ����ʱ
//};

//��׼�����ɲ���

//#include "iostream"
//#include "ctime"
//
//using namespace std;
//
//int  main(){
//    //���ڵ�ǰϵͳ��ʱ��
//    time_t now=time(0);
//
//    //��nowת��Ϊ�ַ��������ʽ
//            char* dt=ctime(&now);
//
//     //����ʱ������
//      cout<<"����ʱ�������"<<dt<<endl ;
//
//      //�����ڵ�ʱ��ת��Ϊtm�Ļ���
//    tm *gmtm=gmtime(&now);
//    dt=asctime(gmtm);
//    cout<<"ʱ������"<<dt<<endl;
//}

//ʹ�ýṹ��tm��ʽ��ʱ��
#include "iostream"
#include "ctime"
using namespace std;
int  main(){
    //���ڵ�ǰϵͳʱ�������
    time_t  now=time(0);
    cout<<"1970�굽���ڵ�ʱ��"<<now<<endl;

    tm *ltm=localtime(&now);
    //���tm�ṹ�ĸ�����ɲ��� ʹ�ü�ͷ���ʳ�Ա��ɲ���

            cout<<"��"<<1900+ltm->tm_year<<endl;
            cout<<"��"<<1+ltm->tm_mon<<endl;
            cout<<"��"<<ltm->tm_mday<<endl;
            cout<<"ʱ��"<<ltm->tm_hour<<endl;
            cout<<ltm->tm_min<<":";
            cout<<ltm->tm_sec<<endl;


}




