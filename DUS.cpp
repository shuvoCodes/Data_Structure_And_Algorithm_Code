#include <bits/stdc++.h>
using namespace std;
int grp_led[1005];
int find(int src){
    if(grp_led[src] == -1)
        return src;
    int led =  find(grp_led[src]);
    grp_led[src] = led;
    return led; 
}
int main()
{
    memset(grp_led,-1,sizeof(grp_led));
    grp_led[1] = 2;
    grp_led[2] = -1;
    grp_led[3] = 1;
    grp_led[4] = 5;
    grp_led[5] = 3;
    find(5);
    cout << grp_led[2];
    return 0;
}