#include<iostream>
#define size 10
using namespace std;

//Name:Yaman Hasan Ansari PRN:230701231552
//Take input from user
int main()
{
int arr[size];
cout << "Enter " << size << " elements of array: ";
for (int index = 0; index < size; index++) {
cin >> arr[index];
}
cout << endl;
// display entered array ekements
for (int j : arr) {
cout << j << " ";
}
return 0;
}
