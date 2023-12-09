#include <iostream>
#include<vector>
using namespace std;


int sol(vector<vector<int>> map, int i,int j,int n, int m){
    int ans=0;
    int a[6][2]={{1,0},{0,1},{-1,0},{1,0},{-1,0},{1,0}};
    int b[6][2]={{2,0},{0,2},{0,1},{0,-1},{0,-1},{0,1}};
    for(int k=0;k<6;k++){
        if(i+a[k][0]>-1&&j+a[k][1]>-1&&i+b[k][0]>-1&&j+b[k][1]>-1&&i+a[k][0]<n&&j+a[k][1]<m&&i+b[k][0]<n&&j+b[k][1]<m){
            ans = max(ans,map[i][j]+map[i+a[k][0]][j+a[k][1]]+map[i+b[k][0]][j+b[k][1]]);
        }
    }
    
    return ans;
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> map(n,vector<int>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>map[i][j];

    int ans=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            ans = max(ans,sol(map,i,j,n,m));

    cout<<ans<<endl;
    return 0;
}