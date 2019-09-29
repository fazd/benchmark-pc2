#include<bits/stdc++.h>

using namespace std;

int main ()
{
    auto start = std::chrono::system_clock::now();
    int n = 10000*1000;
    freopen("10M.txt","r",stdin);
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
    }
    auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    cout<<"Elapsed time: "<<elapsed_seconds.count()<<"\n";
    fclose(stdin);
    return 0;
}