#include<iostream>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155
//sum and average
int main() {
int arr1[10], i, j;
int sum=0;
float avg;
for(i=0;i<10;i++) {
cout<<"Enter element-"<<i+1<<": ";
cin>>arr1[i];
}
for(j=0;j<10;j++) {
sum = sum + arr1[j];
}
cout<<"Sum of elements = "<<sum<<endl;
avg = sum/10;
cout<<"Average = "<<avg;
}
