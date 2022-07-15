#include <iostream>
using namespace std;


long int calculate(long int base,int power)
{

    if(power>1)
    {
    return base*calculate(base,power-1);
    }
    else{
        return base;
        
    }
}
long int calculatePower(int base, int power)
{
    long int ans = 1;
    for (int i = 1; i <= power; i++)
    {
        ans = ans * base;
    }
    return ans;
}

int main()
{
    int base, power;
    cout << "Enter base: ";
    cin >> base;

    cout << "Enter power: ";
    cin >> power;
    cout << base << " ** " << power << "=" << calculatePower(base, power)<<endl;
    cout << base << " ** " << power << "=" << calculate(base, power);
    cin>>base;
    return 0;
}