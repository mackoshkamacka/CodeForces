#include <iostream>
#include <math.h>
#include <utility>
#include <string.h>
#include <stdio.h>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long k, n, w; 
    cin>>k>>n>>w; 
    
    long long cost = k*w*(w+1)*0.5; 
    
    if(cost>n){
        cout<<cost-n; 
    }
    else{
        cout<<0; 
    }



    return 0;
} 

