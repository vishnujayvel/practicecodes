 #include<iostream>
#include<cmath>
using namespace std;
// function for prime factors
void primeFactors(int n){
    int primes[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int i;
    for (i = 0; i <= 24 && primes[i] <= sqrt(n) ; i++)
    {
        if (n%primes[i] == 0)
        {
            cout << primes[i] << " ";
            do
            {
                n = n/primes[i];
            }while (n%primes[i] == 0);
        }
    }
    //next prime number is 101
    for (i = 101; i  <= sqrt(n) ; i=i+2)
    {
        if (n%i == 0)
        {
            cout << i << " ";
            do
            {
                n = n/i;
            }while (n%i == 0);
        }
    }
    if (n > 2)
        cout << n;
}
// function main
int main(){
    int n;
    cout << "enter number: ";
    cin >> n;
    primeFactors(n);
cout << endl;
return 0;
}
 
