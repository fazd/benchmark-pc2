#include<bits/stdc++.h>

using namespace std;

int main ()
{
    freopen("vector106.txt","w",stdout);
    int n = 1000*1000;
    for(int i = 0; i < n; i++){
        int num =  rand() % 1000000000 + 1;
        cout<<num<<"\n";
    }
    fclose(stdout);
    return 0;
}