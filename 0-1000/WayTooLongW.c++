#include <iostream>
#include <math.h>
#include <utility>
#include <string.h>
#include <stdio.h>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; 
    cin>>n; 


    for(int i = 0; i<n; i++){
        char str[1000] = "";
        cin>>str; 
        int length = strlen(str); 
        if(length > 10){
            cout<<str[0];
            cout<<length-2; 
            cout<<str[length-1]<<endl;
        }
        else{
            cout<<str<<endl; 
        }
    }

    return 0;
} 
