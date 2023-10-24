#include<bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real, img;
public:
    void set_data()
    {
        int x,y;
        cin >> x >> y;
        real = x;
        img = y;
    }
    Complex operator+(Complex &obj);
    void display()
    {
        cout << real << endl << img << endl;
    }

};

Complex Complex :: operator+(Complex &obj)
{
    Complex temp;
    temp.real = real + obj.real;
    temp.img = img + obj.img;
    //return temp;
}

int main()
{
    Complex obj1, obj2,obj3;
    obj1.set_data();
    obj2.set_data();
    obj3 = obj1 + obj2;
    obj3.display();
}
