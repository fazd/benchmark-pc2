#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n = 1000*1000;
    freopen("vector106.txt","r",stdin);
    int v[n];
    for(int i = 0; i < n; i++){
        int num;
        cin>>num;
        v[i] = num;
    }
    fclose(stdin);
    auto start = std::chrono::system_clock::now();
    sort(v,v+n);
    /*for(int i = 0; i < 100; i++){
        cout<<v[i]<<"\n";
    }*/
    auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    cout<<"Elapsed time: "<<elapsed_seconds.count()<<"\n";
    return 0;
}