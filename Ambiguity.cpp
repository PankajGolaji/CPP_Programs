// WAP to perform Ambiguity Resolution in Inheritance
// #include <iostream>
// using namespace std;

// class A
// {
// protected:
//     int a;

// public:
//     void input()
//     {
//         cout << "\nEnter A Number: ";
//         cin >> a;
//     }
//     void display()
//     {
//         cout << "\nValue of a = " << a;
//     }
// };
// class B
// {
// protected:
//     int b;

// public:
//     void input()
//     {
//         cout << "\nEnter A Number: ";
//         cin >> b;
//     }
//     void show()
//     {
//         cout << "\nValue of b = " << b;
//     }
// };
// class C : public A, public B
// {
// protected:
//     int c;

// public:
//     void getdata()
//     {
//         cout << "\nEnter A Number: ";
//         cin >> c;
//         A::input();
//         B::input();
//     }
//     void putdata()
//     {
//         cout << "\nValue of c = " << c;
//     }
// };
// int main()
// {
//     C aa;
//     aa.getdata();
//     aa.display();
//     aa.show();
//     aa.putdata();
//     return 0;
// }


#include<iostream>
using namespace std;

// class Base1{
//     public:
//         void greet(){
//             cout<<"How are you?"<<endl;
//         }
// };

// class Base2{
//     public:
//         void greet()
//         {
//             cout << "Kaise ho?" << endl;
//         }
// };


// class Derived : public Base1, public Base2{
//    int a;
//    public:
//     void greet(){
//         Base2 :: greet();
//     }
// };
// int main(){
//   // Ambibuity 1
//      Base1 base1obj;
//      Base2 base2obj;
//      base1obj.greet();
//      base2obj.greet();
//      Derived d;
//      d.greet();

//     return 0;
// }

class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D: public B{
    int a;
    // D's new say() method will override base class's say() method
    public:
        void say()
        {
            cout << "Hello my beautiful people" << endl;
        }
};

int main(){
    // Ambibuity 2
    B b;
    b.say();

    D d;
    d.say();

    return 0;
}

// Ambiguity Resolution in Inheritance

// Ambiguity in inheritance can be defined as when one class is derived for two or more base classes then there are chances that the base classes have functions with the same name. So it will confuse derived class to choose from similar name functions. To solve this ambiguity scope resolution operator is used “::”. 