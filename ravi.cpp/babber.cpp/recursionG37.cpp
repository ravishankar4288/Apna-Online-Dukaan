#include<iostream>
#include<vector>
using namespace std;

    // find subsets
void solve(vector<int> num , vector<vector<int>>& ans , vector<int> output , int index ){
  // base case 
  if(index >= num.size()){
    ans.push_back(output);
    return  ;
  }
  // exclude
  solve(num , ans , output , index + 1);

  // include 
  int element = num[index];
  output.push_back(element);
  solve(num , ans , output , index + 1);

}
vector<vector<int>> subsets(vector<int>& num){
  vector<vector<int>> ans;
  vector<int> output ;
  int index = 0;
  solve(num , ans , output , index ); 
  return ans ; 
}
int main(){
  vector<int> num;
  num.push_back(1);
  num.push_back(2);
  num.push_back(3);
  num.push_back(4);
  vector<vector<int>> ans = subsets(num);
  
  cout<<"[ ";
  for(auto it : ans){
    cout<<" [ ";
    for(auto itr : it){
      cout<<itr<<", ";
    }
    cout<<"],";
  }
cout<<" ]";


  // Print result
  /*
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size(); j++)
			cout << ans[i][j] << " ";
		cout << endl;
	}*/
}
  

