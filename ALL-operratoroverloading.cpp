#include<bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real, img;
public:
    void set_data()
    {
        int x;
        cin >> x;
        real = x;
    }
    Complex operator+(Complex &obj);
    Complex operator-(Complex &obj);
    Complex operator*(Complex &obj);
    Complex operator/(Complex &obj);
    void display()
    {
        cout << real << endl;
    }

};

Complex Complex :: operator+(Complex &obj)
{
    Complex temp;
    temp.real = real + obj.real;
    return temp;
}
Complex Complex :: operator-(Complex &obj)
{
    Complex temp;
    temp.real = real - obj.real;
    return temp;
}
Complex Complex :: operator*(Complex &obj)
{
    Complex temp;
    temp.real = real * obj.real;
    return temp;
}
Complex Complex :: operator/(Complex &obj)
{
    Complex temp;
    temp.real = real / obj.real;
    return temp;
}

int main()
{
    Complex obj1, obj2,obj3;
    obj1.set_data();
    obj2.set_data();
    obj3 = obj1 + obj2;
    obj3.display();
    obj3 = obj1 - obj2;
    obj3.display();
    obj3 = obj1 * obj2;
    obj3.display();
    obj3 = obj1 / obj2;
    obj3.display();
}
