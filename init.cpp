#include<iostream>
using namespace std;
int main(){
    int n = 3;
    // cout<<"Enter number of Projections : ";
    // cin>>n;
    string temp[n] = {"/aB/bA/b/","/aC/bB/","/aA/bC/a/"};
    // for(int i=0 ; i<n ; ++i){
    //     cout<<"Enter Projection "<<i+1<<" : ";
    //     cin>>temp[i];
    // }
    int AutMAt[n+1][n+1];
    for(int i=0 ; i<=n ; ++i){
        for(int j=0 ; j<=n ; ++j){
            if(i==0 && j==0){
                AutMAt[0][0] = 0;
            }
            else if(i==0){
                AutMAt[i][j] = j;
            }
            else if(j==0){
                AutMAt[i][j] = i;
            }
            else{
                AutMAt[i][j] = 0;
            }
        }
    }
    cout<<"\n Making An Empty Matrix having States"<<endl;
    for(int i=0 ; i<=n ; ++i){
        for(int j=0 ; j<=n ; ++j){
            cout<<AutMAt[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Initiating conversion of Projection to Automata Matrix \n";
    for(int i=0 ; i< n ; ++i){
        string maker = temp[i];
        for(int j=3 ; j<maker.length() ; j+=3){
            if(j == maker.length()-1){
                //todo: Some Logic
                cout<<"end"<<endl;
            }
            cout<<j<<endl;
            int nextstate =  maker[j-1] - 64;
            int state = maker[j-2] - 96;
            cout<<nextstate<<" "<<maker[j-1]<<" --- "<<state<<" "<<maker[j-2]<<endl;
            AutMAt[i+1][nextstate] = state;
        } 
    }
    cout<<"\n Making An Empty Matrix having States"<<endl;
    for(int i=0 ; i<=n ; ++i){
        for(int j=0 ; j<=n ; ++j){
            cout<<AutMAt[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}