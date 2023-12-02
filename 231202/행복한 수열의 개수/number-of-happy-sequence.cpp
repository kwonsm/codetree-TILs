#include <iostream>
#include<vector>
using namespace std;

int sol(int n, int m, vector<vector<int>> map){
    int ans=0;
    for(auto s:map){
        int temp=s[0];
        int check=m;
        for(auto a:s){
            if(check==0) {
                ans++;
                break;
            }
            if(temp==a)
                check--;
            else{
                check=m-1;
                temp=a;
            }
            
        }
    }

    for(int i=0;i<n;i++){
        int temp=map[0][i];
        int check=m;
        for(int j=0;j<n;j++){
            if(check==0) {
                ans++;
                break;
            }
            if(temp==map[j][i])
                check--;
            else{
                check=m-1;
                temp=map[j][i];
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