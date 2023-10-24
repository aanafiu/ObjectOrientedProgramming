#include<iostream>
using namespace std;

class complex
{
    float x,y;
public:
    complex() {} //
    complex(float a)
    {
        x = y = a;
    }
    complex(float real, float imag)
    {
        x = real;
        y = imag;
    }

    friend complex sum(complex, complex);
    friend void show(complex);

};

complex sum(complex c1, complex c2)
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}

void show(complex c)
{
    cout << c.x << " + j" << c.y << endl;
}

int main()
{
    complex A(2.7, 3.5); // line 13 - 17 initialization
    complex B(5.8); // line 9 - 12 initialization
    complex C ; //line 8 initialization

    C =sum (A,B);

    cout << "A = ";
    show(A);
    cout << "B = ";
    show(B);
    cout << "C = ";
    show(C);
}