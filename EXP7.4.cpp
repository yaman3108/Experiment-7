#include<iostream>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155
//Search element in array
int main() {
int marks[5], i, j, num, flag=0, count=0;
for(i=0;i<5;i++) {
cout<<"Enter Marks-"<<i+1<<": ";
cin>>marks[i];
}
cout<<"Enter marks to be searched: ";
cin>>num;
for(j=0;j<5;j++) {
if(marks[j]==num) {
cout<<"Position of "<<num<<": "<<j+1<<endl;
count++;
flag=1;
}
}
if(flag==0) {
cout<<"marks not present";
}
else if(flag==1) {
cout<<"marks are present: "<<count<<" times";
}
}
