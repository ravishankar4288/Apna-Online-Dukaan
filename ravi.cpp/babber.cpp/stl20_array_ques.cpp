#include<iostream>
#include<vector>

using namespace std;

//question(1) -> reverse the number
vector <int> reverse(vector<int> v){
    int s = 0;
    int e = v.size() - 1;
    while(s<=e){
        swap(v[s] , v[e]);
        s++;
        e--;
    }

return v;
}

void print(vector<int> v){
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

int main(){
vector <int> v;
v.push_back(2);
v.push_back(4);
v.push_back(6);
v.push_back(8);
v.push_back(10);

vector <int> ans = reverse(v);
cout<<"this is reverse of array : "<<endl;
print(ans);
}


//question(2) -> merge 2 sorted array and find third sorted array
void merge_array(int n , int arr1[] , int m , int arr2[] ,int arr3[]){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i<n){
    arr3[k] = arr1[i];
    k++;
    i++;
    }

    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }

}

void print( int arr[],int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr1[5] = {2,4,6,0,0};
    int arr2[2] = {1,3};
    int arr3[5] ={0};

    merge_array(5,arr1,2,arr2,arr3);
    cout<<"this is the merge sorted array : "<<endl;
    print(arr3,5);

}


// question(3) -> moves zeros
void move_zero(vector <int>& num){
    int i = 0;
    for(int j = 0; j< num.size(); j++){
        if(num[j] != 0){
            swap(num[j] , num[i]);
            i++;
        }
    }
}

void print2(vector<int>& num){
    for(int i = 0 ; i<num.size() ; i++){
        cout<<num[i]<<" ";
    }cout<<endl;
}

int main(){
     vector<int> num ;
    num.push_back(0);
    num.push_back(3);
    num.push_back(6);
    num.push_back(0);
    num.push_back(8);
    num.push_back(0);
    num.push_back(0);
    num.push_back(1); 
    cout<<"this is the move zeroes array : "<<endl;
    move_zero(num);
    print2(num);
   
 

}

