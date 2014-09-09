#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int CeilIndex(int A[], int l, int r, int key) {
    int m;
 
    while( r - l > 1 ) {
        m = l + (r - l)/2;
        (A[m] > key ? r : l) = m; // ternary expression returns an l-value
    }
 
    return r;
}
 
int LongestIncreasingSubsequenceLength(vector<int> A, int size) {
    // Add boundary case, when array size is one
 
    int *tailTable   = new int[size];
    int len; // always points empty slot
 
    memset(tailTable, 0, sizeof(tailTable[0])*size);
 
    tailTable[0] = A[0];
    len = 1;
    for( int i = 1; i < size; i++ ) {
        if( A[i] < tailTable[0]) {
            // new smallest value
            tailTable[0] = A[i];
			//cout << "I: " << i << '\n';
		}
        else if( A[i] >= tailTable[len-1])
            // A[i] wants to extend largest subsequence
            tailTable[len++] = A[i];
        else
            // A[i] wants to be current end candidate of an existing subsequence
            // It will replace ceil value in tailTable
            tailTable[CeilIndex(tailTable, -1, len-1, A[i])] = A[i];
    }
	/*for(int i = 0; i < len; i++)
		cout << tailTable[i] << ' ';
	cout << '\n';*/
    delete[] tailTable;
 
    return len;
}

int main() {
	int n;
	cin >> n;
	
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		
		a[i] = a[i] - i;
		//cout<<a[i]<<endl;
	}
	vector<int> x;
	for(vector<int>::iterator it = a.begin(); it != a.end(); it++) {
		if(*it > 0){
			x.push_back(*it);
		// cout<<"pushing "<<*it<<endl;
		}
			
	}
	int n1 = x.size();	
	/*cout << "N: " << n<<endl;
	for(int i = 0; i < n; i++) {
		cout << x[i] << ' ';
	}*/
	cout << '\n';
	cout << n-LongestIncreasingSubsequenceLength(x, n1) << '\n';
	
}
