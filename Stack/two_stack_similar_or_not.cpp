
/* 
Problem: 2 stack are same or not . Without STL
Topic: Stack
Language: C++
Author: Shakhawat Hossain Shuvo
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
    {   
          cin >>  v[i]; 
    }
    int m;
    cin >> m;
    vector<int> v2(m);
    bool flg = true;
    for(int i = 0;i < m;i++)
    {   
          cin >> v2[i];
    }
    if (m != n )  flg = false;
    else{
        for(int i = 0; i < n;i++)
        {
            if(v[i] != v2[i])
            {
                flg = false;
                break;
            } 

        }
        if(flg == true) cout << "YES";
        else cout << "NO";
    }
    
    return 0;
}

/*
Input:
5
10 20 30 40 50
5
50 40 30 20 10


Output:
NO

*/