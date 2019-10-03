/*
ID: Mehrab_Mahi
TASK: gift1
LANG: C++
*/
#include<bits/stdc++.h>
#define ll long long INT_MAX

using namespace std;

int main(){

    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");

    int n,m=0,p=0,x;

    fin>>n;
    string s,t[n];

    map<string,int>mp;

    for(int i = 0;i<n;i++){
        fin>>s;
        t[i] = s;
        mp[s] = 0;
    }
    for(int i = 0;i<n;i++){
        fin>>s>>m>>p;


        if(m!=0 && p!=0){

        x = m/p;
        mp[s] += (m%p)-m;


        for(int j = 0;j<p;j++){
            fin>>s;

            mp[s]+=x;
        }
        }
        else if(p==0 && m!=0){
            mp[s]+=m;
        }
        else{
            for(int j = 0;j<p;j++){
            fin>>s;
        }
        }

    }

    for(int i = 0;i<n;i++){
        fout<<t[i]<<" "<<mp[t[i]]<<endl;
    }

}
