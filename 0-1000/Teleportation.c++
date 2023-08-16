#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, x, y; 
    cin>>a>>b>>x>>y; 

    int direct = abs(a - b);
    int tpx = abs(a-x) + abs(x-b); 
    int tpy = abs(a-y) + abs(y-b); 

    cout<<max(direct, tpx,tpy); 



    return 0;
} 
