/*
ID: Mehrab_Mahi
TASK: ride
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a,b;
    int aa=1,bb=1;
    fin >> a >> b;

    for(int i = 0;i<a.size();i++){
        aa = aa * (a[i] - 64);
    }

    aa = aa % 47;

    for(int i = 0 ; i < b.size() ; i++){
        bb = bb * (b[i] - 64);
    }

    bb = bb % 47;

    if(aa==bb){
        fout<<"GO\n";
    }
    else
        fout<<"STAY\n";

    return 0;
}

