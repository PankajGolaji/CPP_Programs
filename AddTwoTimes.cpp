// WAP to have 2 -times addition using argument passing

// #include <iostream>
// using namespace std;

// class Time
// {
//     int hours;
//     int min;

// public:
//     void getTime()
//     {
//         cout << "Enter the time: ";
//         cin >> hours >> min;
//     }
//     void putTime()
//     {
//         cout << hours << ":" << min << endl;
//     }
//     void sum(Time, Time);
// };
// void Time::sum(Time t1, Time t2)
// {
//     hours = t1.hours + t2.hours;
//     min = t1.min + t2.min;
//     if (min >= 60)
//     {
//         min = min - 60;
//         hours++;
//     }
// }
// int main()
// {
//     Time t1, t2, t3;
//     t1.getTime();
//     t2.getTime();
//     t3.sum(t1, t2);
//     cout << "sum=";
//     t3.putTime();
//     return 0;
// }


#include<iostream>
using namespace std;

class Time{
 int h,m;
 public:
 void getdata();
 void add(Time, Time);
 void putdata();
};

void Time:: getdata()
{
    cout<<"Enter Hpurs and Minute: ";
    cin>>h>>m;
}
void Time::add(Time aa, Time bb)
{
    h=(aa.m+bb.m)/60;
    m=(aa.m+bb.m)%60;
    h=h+aa.h+bb.h;
}
void Time::putdata()
{
    cout<<"Time is: "<< h <<"Hours"<< m <<"Minutes";
}

int main()
{
    Time aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc.add(aa,bb);
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
}
