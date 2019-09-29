#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n = 10*1000;
    freopen("vector104.txt","r",stdin);
    int v[n];
    for(int i = 0; i < n; i++){
        int num;
        cin>>num;
        v[i] = num;
    }
    fclose(stdin);
    auto start = std::chrono::system_clock::now();
    set<int >s;
    for(int i = 0; i < n; i++){
        s.insert(v[i]);
    }
    auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    cout<<"Elapsed time: "<<elapsed_seconds.count()<<"\n";
    return 0;
}