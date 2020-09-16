#include <iostream>
#include<string>
#include<unordered_map>

using namespace std;


int main() {

    unordered_map<string,int> ourmap;   // each of the three processes - insert, search and delete will use O(1) time in comparison to O(logn) time for map which uses BST
                                        // whereas the unordered map uses hash table which is much more efficient
    
   //insert
    pair<string,int> p("abc",1);
    ourmap.insert(p);
    ourmap["def"] = 2;
    cout<<ourmap.size()<<endl;

    //search
    cout<<ourmap["abc"]<<endl;
    cout<<ourmap.at("def")<<endl;
    //cout<<ourmap.at("ghi")<<endl;   it will result in an exception since the value isn't present in the unordered map
    return 0;   
}
