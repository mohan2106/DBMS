#include<bits/stdc++.h>
#include<string>

using namespace std;

bool comparator(int a, int b){
    return a>=b;
}
bool comp(pair<int,int> a, pair<int,int> b){
    return a.second >= b.second;
}

int main(){
    vector<int> arr = {4,5,8,6,9,3,4,5,7,8,5,6,9};
    sort(arr.begin(),arr.end());
    bool present = binary_search(arr.begin(),arr.end(),5);
    vector<int>::iterator it = lower_bound(arr.begin(),arr.end(),4); //return pointer to the first no >= 4 in the array
    auto lower = lower_bound(arr.begin(),arr.end(),4); //return pointer to the first no >= 4 in the array
    auto upper = upper_bound(arr.begin(),arr.end(),4); //return pointer to the first no > 4 in the array  

    //===========================================compatrator func in sort

    sort(arr.begin(),arr.end(),comparator);

    //==============================================vector using pair
    vector< pair<int,int> > pairvec;

    pairvec.push_back(make_pair(1,56));
    pairvec.push_back(make_pair(45,2));
    pairvec.push_back(make_pair(19,69));
    pairvec.push_back(make_pair(9,0));

    sort(pairvec.begin(),pairvec.end()); 
    /*
        *this will sort accorting to firt number
            (1,56)
            (9,0)
            (19,69)
            (45,2)
    */
    //if you need to sort according to second element than use comparator function

    sort(pairvec.begin(),pairvec.end(),comp); //sort in desending order according to second element

    for(pair<int,int> &x:pairvec){
        cout<<x.first<<" "<<x.second<<'\n';
    }

    return 0;
}