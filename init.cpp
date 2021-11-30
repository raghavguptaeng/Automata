#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of Projections : ";
    cin>>n;
    string temp[n];
    for(int i=0 ; i<n ; ++i){
        cout<<"Enter Projection "<<i+1<<" : ";
        cin>>temp[i];
    }
    cout<<temp[0];
    return 0;
}