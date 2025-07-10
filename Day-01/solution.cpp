#include <bits/stdc++.h>
using namespace std;

bool IsPresent(int A[],int N, int X){
    for(int i=0;i <N ;i++){
        if(A[i]==X){
            return true;
            break;
        }
    }
    return false;
}

int main() {
	// your code goes here
	int N , X;
    cin>>N ;
    cin>>X;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    
   if(IsPresent(A , N , X)){
       cout<<"yes";
   }
    else{
        cout<<"No";
    }

}
