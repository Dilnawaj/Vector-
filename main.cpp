#include <bits/stdc++.h>
using namespace std;

int main() {
 //how to declare Vector
vector<int>v;


//How to declare and Create a fixed size Vector
//vector<int>v(5);

//how to declare and Initialize vector with a Value like 0
//vector<int>v(5,0);

//How to Copy data from one vactor to Another
/*
vector<int>a ={1,2,3};
vecor<int>b(a);
//Vector b get same data of a
*/

//For Inserting an Element we use Push_Back Function
//v.Push_Back(100);


//For Removing an Element we use Pop back function(it reoves from backside)
//v.pop_back();


//Capacity->it is dynamic memory allocation.when size is filled than it automatically double the size as 0 1 2 4 8 16 32 64 etc
//it tells us for how many Elements we have  space
//v.capacity()


//We can shrink our capacity too.after shrinking its size is equals to no. of Elements present in vector.
//v.shrink_to_fit();


//Size->It tells use how many Elements are in the vecor.It tells us actual size of vector.
//v.size();


//For accessing first Element in a vector
//v.front();

//For accessing Back Element in a vector
//v.back();

//Clear()->It helps in for removing all Elements from vector
//Note->it only makes size 0 nut capacity remains same
//v.clear();


//for Removing Elements  at a particular range we use erase function
//it takes arguments in iterator
//v.erase(iterator1,iterator2);

}