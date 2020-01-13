#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    //======================================MAP implemantation
    /*
        ** it is implemented using balanced (binary search tree) in which key act as node 
        *insert in log(n) time
        *delete in log(n) time   //A.erase(key)
        *find in log(n) time // A.find(key)    
    */
    map<char,int> cnt;

    //======================================UNORDERD MAP
    /*
        ** it is implemented using HASH TABLE {worst case time complexity is O(N) when collapse happen but average case is o(1)}
        insert operation takes o(1) time
        delete operation takes o(1) time
        search operation takes o(1) time
    */

    string a = "Mohan kumar";
    for(char x : a){
        cnt[x]++;
    }
    cout<<cnt['m']<<'\n';
    return 0;
}