#include<iostream>
#include<vector>
using namespace std;


vector<int> f()

{

vector<int> v(3);

return v;

}

int main(){
vector<int> a=f();
a.push_back(1);
cout<<a[0];
}
