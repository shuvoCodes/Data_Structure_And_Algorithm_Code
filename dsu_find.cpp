#include <bits/stdc++.h>
using namespace std;
int grp_led[1005];
int grp_size[1005];
int find(int node)
{
    if(grp_led[node] == -1)
        return node;
    int leader = find(grp_led[node]);
    grp_led[node]=leader;
    return leader;
}
void dsu_union(int node1,int node2)
{
    int led1 = find(node1);
    int led2 = find(node2);

    if(grp_size[led1] > grp_size[led2])
    {
        grp_led[led2] = led1;
        grp_size[led1] += grp_size[led2];
    }
    else
    {
        grp_led[led1] = led2;
        grp_size[led2] += grp_size[led1];
    }
}
int main()
{
    memset(grp_led,-1,sizeof(grp_led));
    memset(grp_size,1,sizeof(grp_size));

    dsu_union(1,2);
    dsu_union(2,4);
    dsu_union(3,5);
    dsu_union(1,3);
    for(int i = 1; i < 6;i++)
        cout << i << " " << grp_led[i] << endl;
    return 0;
}