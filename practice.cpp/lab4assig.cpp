//Q-1********************************************************************

#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&s ){
    if(s.empty()){
        return;
    }
    int element = s.top();
    s.pop();
    solve(s);
    sortstack(s,element);
}

 void sortstack(stack<int>&s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    if(s.top()>element){
        s.push(element);
        return;
    }
     int num = s.top();
     s.pop();
     sortstack(s,element);
     s.push(num);

}

int main(){
    stack<int>s;
    int n;
    int x;
    cin>>n;
    cout<<" No. of elements "<<n<<endl;
   
    // crate stack
    for(int i =0; i<n;i++){
        cin>>x;
        s.push(x);
    }
    
     solve(s);
   
   while(!s.empty()){
       cout<<s.top()<<" ";
       s.pop();
   }
    
}


//Q-2*********************************************************************
// C++ program for implementation of KMP pattern searching
// algorithm
#include <bits/stdc++.h>

void computeLPSArray(char* pat, int M, int* lps);

// Prints occurrences of txt[] in pat[]
void KMPSearch(char* pat, char* txt)
{
	int M = strlen(pat);
	int N = strlen(txt);

	// create lps[] that will hold the longest prefix suffix
	// values for pattern
	int lps[M];

	// Preprocess the pattern (calculate lps[] array)
	computeLPSArray(pat, M, lps);

	int i = 0; // index for txt[]
	int j = 0; // index for pat[]
	while ((N - i) >= (M - j)) {
		if (pat[j] == txt[i]) {
			j++;
			i++;
		}

		if (j == M) {
			printf("Found pattern at index %d ", i - j);
			j = lps[j - 1];
		}

		// mismatch after j matches
		else if (i < N && pat[j] != txt[i]) {
			// Do not match lps[0..lps[j-1]] characters,
			// they will match anyway
			if (j != 0)
				j = lps[j - 1];
			else
				i = i + 1;
		}
	}
}

// Fills lps[] for given pattern pat[0..M-1]
void computeLPSArray(char* pat, int M, int* lps)
{
	// length of the previous longest prefix suffix
	int len = 0;

	lps[0] = 0; // lps[0] is always 0

	// the loop calculates lps[i] for i = 1 to M-1
	int i = 1;
	while (i < M) {
		if (pat[i] == pat[len]) {
			len++;
			lps[i] = len;
			i++;
		}
		else // (pat[i] != pat[len])
		{
			// This is tricky. Consider the example.
			// AAACAAAA and i = 7. The idea is similar
			// to search step.
			if (len != 0) {
				len = lps[len - 1];

				// Also, note that we do not increment
				// i here
			}
			else // if (len == 0)
			{
				lps[i] = 0;
				i++;
			}
		}
	}
}

// Driver code
int main()
{
	char txt[] = "ABABDABACDABABCABAB";
	char pat[] = "ABABCABAB";
	KMPSearch(pat, txt);
	return 0;
}
