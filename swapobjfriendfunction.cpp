#include<bits/stdc++.h>
using namespace std;
class b;
class a
{
private:
    int x;
public:
    void set_data(int v)
    {
        x = v;
    }
    void display()
    {
        cout << "X = " << x << endl;
    }
    friend void swap( a&, b&);

};
class b
{
private:
    int y;
public:
    void set_data(int v)
    {
        y = v;
    }
    void display()
    {
        cout << "Y = " << y << endl;
    }
    friend void swap( a&, b&);

};
void swap(a &m, b &n)
{
    int temp = m.x;
    m.x = n.y;
    n.y = temp;
}

int main()
{
    a m;
    b n;
    int x,y;
    cin >> x >> y;
    cout << x << " " << y << endl;

    m.set_data(x);
    n.set_data(y);
    swap(m,n);
    m.display();
    n.display();
}
