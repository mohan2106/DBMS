#include<bits/stdc++.h>
#include<string>

using namespace std;

void powerOfset(){
    /*
        we are solving a problem in which we have set of intervals <int,int>
        and we have to print the interval in which a particular element do lies.
    */
    set< pair<int, int> > s;
    s.insert(make_pair(1,10));
    s.insert({11,56});
    s.insert({57,160});
    s.insert({162,999});

    int t;
    cin>>t;
    auto it = s.upper_bound({t, INT_MAX });
    if(it == s.begin()){
        cout<<"Not found"<<'\n';
    }else{
        it-- ;
        pair<int,int> current = *it;
        if(t>= current.first && t<= current.second){
            cout<<"("<<current.first<<","<<current.second<<")"<<'\n';
        }else{
            cout<<"Not Found"<<'\n';
        }
    }
    
}
void setDemo(){

    //========================================================SET DEMO
    /*
        ** it is subset of map (build using bst) in which key act as node
        *insert done in log(n) order.   s.insert(<number>)
        *delete operation done in log(n). s.delete(<number>)
        *search in log(n).
        *always maintain sorted property in increasing order.
    */

    //=========================================================UNORDERED SET 
    /*
        ** implemented using HASH TABLE
        * o(1) average time for serching inserting and deleting
        * unordered
    */
	set<int> s;
	s.insert(9);
	s.insert(43);
	s.insert(5);
	s.insert(0);
	s.insert(-98);
	s.insert(-8);
	s.insert(69);
	s.insert(45);
	for(int x:s){
		cout<<x<<" ";
	}
	cout<<'\n';
	int n;
	cin>>n;
    //===========================================================FIND FUNCTION

	auto it = s.find(n);
	if(it!=s.end()){
		cout<<n<<" is present"<<'\n';
	}else{
		cout<<n<<" not present"<<'\n';
	}

    ///===========================================================LOWER BOUND AND UPPER BOUND

    auto it2 = s.lower_bound(43); //return pointer to 43
    auto it3 = s.upper_bound(43); //return pouinter to 45

    /*
        remember that in vector lowerbound and upper bound is used as an explicit function
        while in set it is the class funtion of set.
    */
}


int main(){
	// setDemo();
    powerOfset();
	return 0;
}