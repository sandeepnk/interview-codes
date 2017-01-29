#include<iostream>
#include<vector>

using namespace std;

void quicksort(vector<int>&A,int l,int r){


}


int main(){

    vector<int> A = {6,17,15,13};
    //A.push_back(6);
    //A.push_back(17);
    //A.push_back(15);
    //A.push_back(13);
    //A.push_back(4);
    int n = A.size();
    cout<<"unsorted>>>>";
    for(int i=0;i<n;i++)
        cout<< A[i]<<"\t";

    //quicksort(A,0,n-1);

    cout<<"\n Sorted>>>>";
    for(int i=0;i<n;i++)
        cout<< A[i]<<"\t";

}
