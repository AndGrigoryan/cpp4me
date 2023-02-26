#include <iostream>

using namespace std;

unsigned gcd(unsigned a, unsigned b)
{
    return b == 0 ? a : gcd(a, a % b);
}

int main() 
{    
    
    cout << gcd(6, 7) << endl;

    return 0;
}