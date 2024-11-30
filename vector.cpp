#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;

    v[1]=3;
    cout<<v[1]<<endl;
    cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>v1={2,3,4,5};

    cout<<v.size()<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    v.clear();
    cout<<v.size()<<endl;
    cout<<v.empty()<<endl;
    v1.resize(5);
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    vector<int>a(5);
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    a=v1;
    for(auto u: a) cout<<u<<" ";
    cout<<endl;

    vector<int>::iterator it;
    for(it=a.begin(); it!=a.end(); it++) cout<<*it<<" ";
    cout<<endl;

    vector<int>b;
    b={3,4,5,1,2,3};
    sort(b.begin(), b.end());
    for(auto u: b) cout<<u<<" ";
    cout<<endl;

    sort(b.rbegin(), b.rend());
    for(auto u: b) cout<<u<<" ";
    cout<<endl;

    sort(b.begin(), b.end(), greater<int>());
    for(auto u: b)cout<<u<<" ";
    cout<<endl;

    vector<int>c;
    c={7,4,5,1,2,3};
    reverse(c.begin(), c.end());
    for(auto u:c)cout<<u<<" ";
    cout<<endl;
    cout<<*c.begin()<<endl;

    c.erase(c.begin());
    c.erase(c.begin()+2);
    for(auto u: c)cout<<u<<" ";
    cout<<endl;

    vector<int>d;
    d={1,1,2,2,3,4,7,5,4,4};
    int uniq = unique(d.begin(), d.end())-d.begin();
    for(int i=0;i<uniq; i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    cout<<*max_element(d.begin(), d.end())<<endl;

}
