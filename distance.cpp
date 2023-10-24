#include<bits/stdc++.h>
using namespace std;

class Distance
{
private:
    int feet;double inch;
public:
    void set_data(int x, double y)
    {
        feet = x;
        inch = y;
    }
    void display()
    {
        cout << feet << " " << inch << endl;
    }
    Distance add(Distance);
};
Distance Distance :: add(Distance a)
{
    Distance t;
    t.inch = inch + a.inch;
    t.feet = 0;

    if(t.inch >= 12.0)
    {
        t.inch -= 12.0;
        t.feet++;
    }
    t.feet = feet + a.feet;
    return t;
}
int main()
{
    Distance a,b,c;
    a.set_data(10, 7.1);
    b.set_data(10, 7.1);
    c = a.add(b);
    c.display();

}
