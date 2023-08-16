#include <iostream>
#include <math.h>
#include <utility>
#include <string.h>
#include <stdio.h>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("square.in", "r", stdin);
	freopen("square.out", "w", stdout);

    int x1a,y1a,x2a,y2a,x1b,y1b,x2b,y2b;

    cin>>x1a>>y1a>>x2a>>y2a>>x1b>>y1b>>x2b>>y2b; 

    int minxa = min(x1a,x2a);
    int minxb = min(x1b,x2b); 
    int minx = min(minxb, minxa); 
    int maxxa = max(x1a,x2a);
    int maxxb = max(x1b,x2b); 
    int maxx = max(maxxb, maxxa); 
    int x = maxx - minx; 

    int minya = min(y1a,y2a);
    int minyb = min(y1b,y2b); 
    int miny = min(minyb, minya); 
    int maxya = max(y1a,y2a);
    int maxyb = max(y1b,y2b); 
    int maxy = max(maxyb, maxya); 
    int y = maxy - miny; 

    if(y>x){
        cout<<pow(y,2);
    }
    else{
        cout<<pow(x,2); 
    }


    return 0;
} 

