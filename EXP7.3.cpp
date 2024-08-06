#include<iostream>
using namespace std;

//Name:Yaman Hasan Ansari PRN:23070123155
int main(){
int n,i,j=0,k,l,temp;
cout<<"Enter the size of the array: ";
cin>>n;
int A1[n],A2[n];

for(i=0;i<n;i++){
cout<<"Enter the element- "<<i+1<<" ";
cin>>A1[i];
}
cout<<endl;

cout<<" Array given by user: "<<endl;
for(l=0;l<n;l++){
cout<<A1[l];
cout<<endl;
}
cout<<endl;

for(k=(n-1);k>=0;k--){
temp = A1[k];
A2[j]= temp;
j++;
}

cout<<"Reverse array printed: "<<endl;
for(l=0;l<n;l++)
{
cout<<A2[l];
cout<<endl;
}
}
