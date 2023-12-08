#include <iostream>
#include<vector>
using namespace std;

int sol(int n, int m, vector<vector<int>> map){
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-m+1;j++){
            bool same=true;
            for(int k=j;k<j+m;k++)
                if(map[i][k]!=map[i][j]) same=false;
            if(same){
                ans++; break;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-m+1;j++){
            bool same=true;
            for(int k=j;k<j+m;k++)
                if(map[k][i]!=map[j][i]) same=false;
            if(same){
                ans++; break;
            }
        }
    }
    
    return ans;
}

int main() {
    int n, m;
    cin>> n>> m;
    vector<vector<int>> map(n,vector<int>(n));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>map[i][j];
    
    cout<<sol(n,m,map)<<endl;
    return 0;
}