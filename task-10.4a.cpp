#include <iostream>

using namespace std;
 
class lessthan 
{
    private:
        int feet;        
    public:
        lessthan(int f) 
        {
            feet = f;
        }
        friend lessthan operator <(const lessthan&, const lessthan&); 
};

lessthan operator <(const lessthan& d1, const lessthan& d2) 
{
    if(d1.feet < d2.feet) 
        cout<<"num1 is greater";
    else
        cout<<"num2 is greater";
    return 0; 
}


int main() 
{
    int a,b;
    cout<<"Enter num1 and num2 respectively: \n";
    cin>>a>>b;
    lessthan N1(a), N2(b);
    N1 < N2;
    return 0;
}
