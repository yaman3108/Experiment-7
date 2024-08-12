#include<iostream>
#include<string>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155
int main() {
string a;
cout<<"Enter string: ";
cin>>a;

int i,len=a.length();
for(i=len-1;i>=0;i--) {
cout<<a[i];
}
return 0;
}
