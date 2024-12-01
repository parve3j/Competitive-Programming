#include<bits/stdc++.h>
using namespace std;
int main(){
    // Unique value

    vector<int>v={2,3,4,4,7,7,1};
    sort(v.begin(), v.end());
    int vector_size= unique(v.begin(), v.end())-v.begin();
    for(int i=0;i<vector_size; i++) cout<<v[i]<<" ";
    cout<<endl;

    // max element
    cout<<*max_element(v.begin(), v.end())<<endl;
    // min element
    cout<<*min_element(v.begin(), v.end())<<endl;

    // 2D vector
    vector<vector<int>>v1;
    vector<int> a1={2, 3,4};
    vector<int> a2={2,3,4,4,4,5};
    vector<int> a3={1,2,3,4,5};
    v1.push_back(a1);
    v1.push_back(a2);
    v1.push_back(a3);

    for(auto u: v1){
        for(auto g: u) cout<<g<<" ";
        cout<<endl;
    }

}
