/*
ID: Mehrab_Mahi
TASK: friday
LANG: C++
*/
#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int leap(int n){
    if(n%4==0){
        if(n%100==0){
            if(n%400==0)
                return 1;
            else
                return 2;
        }
        else
            return 1;
    }
    else
        return 2;
}

int main()
{
    optimize;

    ofstream fout("friday.out");
    ifstream fin ("friday.in");

    int a[12],x,n;
    map<int,int>mp;
    a[0] = 1,a[1] = 4, a[2] = 4, a[3] = 7, a[4] = 2, a[5] = 5, a[6] = 7,a[7] = 3,a[8] = 6,a[9] = 1,a[10] = 4, a[11] = 6;
    fin>>n;
    for(int i = 1900;i<=1900+n-1;i++){
        x = leap(i);

            if(x==1){
                for(int k = 2;k<12;k++){
                    a[k]++;

                if(a[k]>7)
                a[k] = a[k] - 7;
                }
            }
        for(int j = 0;j<12;j++){
            mp[a[j]]++;
        }


        if(x==1){
            a[0]++;
            a[1]++;
        }


        for(int j = 0;j<12;j++){
            a[j]++;

            if(a[j]>7)
                a[j] = a[j] - 7;
        }



    }



    for(int i = 1;i<=7;i++){
        if(i!=1)
            fout<<" "<<mp[i];
        else
            fout<<mp[1];
    }

    fout<<endl;


}
