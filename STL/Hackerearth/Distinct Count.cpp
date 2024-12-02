Problem link:
https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/
My solution:
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int sizes, num;
        cin>>sizes>>num;
        vector<int>v(sizes);
        int input;
        for(int i=0;i<sizes; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int unique_count= unique(v.begin(), v.end())-v.begin();
        if(unique_count==num) cout<<"Good"<<endl;
        else if(unique_count>=num) cout<<"Average"<<endl;
        else cout<<"Bad "<<endl;
    }
}
