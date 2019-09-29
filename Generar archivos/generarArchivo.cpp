#include<bits/stdc++.h>

using namespace std;

int main ()
{
    auto start = std::chrono::system_clock::now();
    int n = 1000*1000;
    freopen("1M.txt","w",stdout);
    for(int i = 0; i < n; i++){
        cout<<"line"<<i<<"\n";
    }
    auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    cout<<"Elapsed time: "<<elapsed_seconds.count()<<"\n";
    fclose(stdout);
    return 0;
}