#include<iostream>
#include<math.h>
#include<vector>
#include<utility>
#include<sstream>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string str; 
    cin>>str;
    int count = 1; 
    for(int i=1; i<str.length(); i++){
        if(str[i]==str[i-1]){
            count++; 
        }else{
            count = 1; 
        }
        if(count>=7){
            cout<<"YES"<<endl; 
            return 0; 
        }
    }
    cout<<"NO "<<count;
    

    return 0;
} 

 