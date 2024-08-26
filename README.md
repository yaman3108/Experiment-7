# Experiment 7



## Aim:
To study and implement C++ arrays.


## Apparatus:
Vs Code, Github


## Theory:

In computer science, an array is a data structure consisting of a collection of elements (values or variables), of same memory size, each identified by at least one array index or key. Arrays have continous memory allocation In C++ language, the array has a fixed size meaning once the size is given to it, it cannot be changed i.e. you can’t shrink it nor can you expand it. The reason was that for expanding if we change the size we can’t be sure ) that we get the next memory location to us for free. The shrinking will not work because the array, when declared, gets memory statically allocated, and thus compiler is the only one that can destroy it. For example: - If an array is of the integer datatype, then: -

1. The array will contain only integer datatype values and variables
2. If the first element memory address is allocated at 1000 then the 2nd element will have the memory address as 1004
3. The array indexing will start at 0, so if u want ot access the first element of lets say array arr, it will have to be called at either the value of arr[0] or via reference(address of the first element)

### Applications of Array Data Structure: -

1. To represent data in matrix form, a vector or a tabular form
2. To store data for processing
3. Implementing data structures such as queues and stacks as well dynamic memeory allocation like linked lists and trees

### Array Operations: -

1. Traversal : Visiting each element of an array in a specific order (e.g., sequential, reverse).
2. Insertion : Adding a new element to an array at a specific index.
3. Deletion : Removing an element from an array at a specific index.
4. Searching : Finding the index of an element in an array.

### Types of arrays: -

1. One dimensional arrays
2. Multi dimensional arrays


## Code:

```
#include<iostrean>
using namespace std;

//Name: Yaman Hasan Ansari
int main()
{
  int array[5]={19,10,8,17,9};
  int array2[]={19,10,8,17,9};
  int array3[5]={19,10,8};

  //Printing elements in an array
  
cout<<"n Traditional Method";
for(int i=0;i<5;++i){
 cout<<array1[i]<<" ";
}
cout<<endl;
}
```
### Output:
![Screenshot 2024-08-05 113519](https://github.com/user-attachments/assets/20202799-f746-4952-8e24-73e6072142de)

### Nested if-else:
```
#include<iostream>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155
// Nested if else program
int main() {
    int  num1, num2, num3;
    cout<<"Enter number-1: ";
    cin>>num1;
    cout<<"Enter number-2: ";
    cin>>num2;
    cout<<"Enter number-3: ";
    cin>>num3;

    if(num1>=num2) {
        if(num1>=num3) {
            cout<<num1<<" is the greatest number"<<endl;
        }
        else {
            cout<<num3<<" is the greatest number"<<endl;
        }
    }
    else if(num2>=num1) {
        if(num2>=num3) {
            cout<<num2<<" is the greatest number"<<endl;
        }
        else {
            cout<<num3<<" is the greatest number"<<endl;
        }
    }
    
}
```
### Output:
![Screenshot 2024-08-05 113658](https://github.com/user-attachments/assets/abde726c-3bfa-4c43-a81f-565b24bc05a6)

### Switch case:
```
#include<iostream>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155
// Simple calculator using 'Switch case'
 
 int main()
 {
    int choice;
    double num1,num2;
    cout<<"This is a simple calculator"<<endl;
    cout<<"1 for addition"<<endl;
    cout<<"2 for subtraction"<<endl;
    cout<<"3 for multiplication"<<endl;
    cout<<"4 for division"<<endl;
    cout<<" Enter the operation choice number (1-4)"<<endl;
    cin>>choice;

    cout<<"Enter any two numbers: "<<endl;
    cin>>num1>>num2;

    switch(choice){
        case 1:
        cout<<"Addition = "<<num1+num2<<endl;
        break;

        case 2:
        cout<<"subtraction = "<<num1 - num2<<endl;
        break;

        case 3:
        cout<<"Multiplication = "<<num1*num2<<endl;
        break;

        case 4:
        cout<<"Division = "<<num1/num2<<endl;
        break;
    }

    return 0;
 }
```
### Output:
![Screenshot 2024-08-05 113816](https://github.com/user-attachments/assets/e1bc9c26-4d3c-4efb-a287-086d0a219f53)


## Conclusion:
This program helps us understand how conditional statements work in C++. These conditional statements can be used to make decisions in your program, specifically it only runs a block of code if a particular situation occurs.
