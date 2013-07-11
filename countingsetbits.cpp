/*Subtraction of 1 from a number toggles all the bits (from right to left) till the rightmost set bit(including the righmost set bit). So if we subtract a number by 1 and do bitwise & with itself (n & (n-1)), we unset the righmost set bit. If we do n & (n-1) in a loop and count the no of times loop executes we get the set bit count.
Beauty of the this solution is number of times it loops is equal to the number of set bits in a given integer.

 time: O(k) where k is the number of set bits 0<=k<=n
 */
 #include<iostream>
using namespace std;
int countSetBits(int n){
 int count=0;
 while(n){
 	n=n&n-1;
 	count++;
 }
 return count;
}
int main(){
	cout<<countSetBits(15);
	
}
