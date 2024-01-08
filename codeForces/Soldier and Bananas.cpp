#include<iostream>
using namespace std;
int main(){

int k,n,w;
cin>> k>> n>> w;
int totalcost = k* (w*(w+1)/2);
int borrow = max(0, totalcost-n);
cout<< borrow << endl;
return 0;

}
