#include<iostream>
#include<vector>

using namespace std;

int main(int args, char* argv[]){

    vector< vector<int> > a;
    vector<int> b;
    b.push_back(23);
    b.push_back(42);
    a.push_back(b);
    cout<< a[0].size();
}
