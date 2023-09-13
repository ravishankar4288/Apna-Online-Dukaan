//*****************************************************
//Q-1 :  check if two strings are rotations of each other or not.
#include <bits/stdc++.h> 
class Solution
{
    public:
    bool areRotations(string s1,string s2)
    {
        int n = s1.length();
        int m = s2.length();
        
        // string s3 = s1 + s2;

        // if(n != m){
        //     return false;
           
        // }
        // return (s3.find(s1) != string::npos);
        
    queue<char> q1;
    for (int i = 0; i <n ; i++) {
        q1.push(s1[i]);
    }
 
    queue<char> q2;
    for (int i = 0; i <m ; i++) {
        q2.push(s2[i]);
    }
 
    
    while (m--) {
        char ch = q2.front();
        q2.pop();
        q2.push(ch);
        if (q2 == q1)
            return true;
    }
    return false;
}

    
};