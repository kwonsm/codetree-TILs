#include <iostream>
#include<vector>
using namespace std;

int sol(vector<vector<int>> map, int n){
    int ans=0;
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-2;j++){
            int temp = map[i][j]+map[i+1][j]+map[i+2][j]+map[i][j+1]+map[i+1][j+1]+map[i+2][j+1]+map[i][j+2]+map[i+1][j+2]+map[i+2][j+2];
            if(temp>ans) ans=temp;
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<vector<int>> map(n,vector<int>(n,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>map[i][j];
        }
    }
    cout<<sol(map, n)<<endl;
    return 0;
}