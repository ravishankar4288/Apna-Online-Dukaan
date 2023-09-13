//************** STL Array **************

#include<iostream>
#include<array> // this is for STL array

using namespace std;
int main(){
    int basic_array[5] = {1,2,3,4,5};

array<int,5> stl_array ={1,2,3,4,5};  //this is STL array

array<int,6> a = {1,3,5,7,9,11};
//some important feature of STL array
int size = a.size();

for(int i = 0 ; i < size ; i++){
    cout<<a[i]<<" ";
}
cout<<endl;
cout<<"size of array is : "<<a.size()<<endl;
cout<<"element of 2nd index is : "<<a.at(2)<<endl;
cout<<"array is empty or not : "<<a.empty()<<endl;
cout<<"first element of array is : "<< a.front()<<endl;
cout<<"last element of array is : "<<a.back()<<endl;
}

