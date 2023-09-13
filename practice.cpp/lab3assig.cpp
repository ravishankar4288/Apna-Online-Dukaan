// //Q-1
// #include<iostream>
// #include<stack>
// using namespace std;


//  void insertAtbottom(stack<int>&s,int element){
//     if(s.empty()){
//         s.push(element);
//     return;
//     }
//      int num = s.top();
//      s.pop();
//      insertAtbottom(s,element);
//      s.push(num);

// }
// void solve(stack<int>&s ){
//     if(s.empty()){
//         return;
//     }
//     int element = s.top();
//     s.pop();
//     solve(s);
//     insertAtbottom(s,element);
// }


// int main(){
//     stack<int>s, st;
//     int n;
//     int x;
//     cin>>n;
//     cout<<" No. of elements "<<n<<endl;
   
//     // crate stack
//     for(int i =0; i<n;i++){
//         cin>>x;
//         st.push(x);
//     }
//     s=st;
//     cout<<"orignal stack"<<endl;
//     while(!st.empty()){
//        cout<<st.top()<<" ";
//        st.pop();
//    }
// }


//****************************************************
//Q-2

#include <bits/stdc++.h>
using namespace std;


void permute(string ip, string op)
{
	// base case
	if (ip.size() == 0) {
		cout << op << " ";
		return;
	}
	// pick lower and uppercase
	char ch = tolower(ip[0]);
	char ch2 = toupper(ip[0]);
	ip = ip.substr(1);
     
     if(ch == ch2){
	permute(ip, op + ch);
     }
     else{
    permute(ip, op + ch);
	permute(ip, op + ch2);
     }
}


int main()
{
	string ip = "a1b";
	permute(ip, "");
	return 0;
}
