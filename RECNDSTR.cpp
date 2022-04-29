#include <bits/stdc++.h>
using namespace std;

bool check(string S)
{
    if(S.size() == 1 or S.size() == 2)
       return true;
       
    string S1 = S;
    string S2 = S;
    
    char temp1 = S1[0];
    
    for(long long i = 1; i < S1.size() ; i++)
        S1[i - 1] = S1[i];
        
    S1[S1.size() - 1] = temp1;
    
    char temp2 = S2[S2.size() - 1];
    
    for(long long i = S2.size() - 2 ; i >= 0 ; i--)
        S2[i + 1] = S2[i];
        
    S2[0] = temp2;
    
    for(long long i = 0; i < S.size() ; i++)
    {
        if(S1[i] != S2[i])
           return false;
    }
    
    return true;
}

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    string S;
	    cin>>S;
	    
	    if(check(S))
	       cout<<"YES"<<endl;
	    else
	       cout<<"NO"<<endl;
	}
	return 0;
}
