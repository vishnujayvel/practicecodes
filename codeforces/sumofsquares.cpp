#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
    int n, i=0;
    cout << "Integer? ";
    cin >> n;
    double temp_frac, a, b;
    long long int c=0;
    do
    {
        a = pow(i,2);
        b = sqrt(n-a);
        if( a > n )
            break;
        else if( i > b )
            break;
        else if( modf(b, &temp_frac) == 0 )
            c++;
        ++i;
    }
    while(1);
    cout<<c;
    main();
    return 0;
}
