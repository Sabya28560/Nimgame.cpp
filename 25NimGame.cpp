#include<iostream>
using namespace std;
int Nimgame(int n){
    int c,temp=n;
    while(1){
        cout<<"Enter 1st person's move: ";
        cin>>c;
        if(c<=3){
            temp=temp-c;
            if((temp)<=0){
                return 0;
            }
        }
        else{
            cout<<"Invalid move"<<endl;
        }
        cout<<"Remaining stones: "<<temp<<endl<<endl;
        cout<<"Enter 2nd person's move: ";
        cin>>c;
        if(c<=3){
            temp=temp-c;
            if((temp)<=0){
                return 1;
            }
        }
        else{
            cout<<"Invalid move"<<endl;
        }
        cout<<"Remaining stones: "<<temp<<endl<<endl;
        
    }
}
int main(){
    int N;
    cout<<"Welcome to Nim game"<<endl;
    cout<<"Game rules: "<<endl;
    cout<<"There is a certain no. of stones in a heap."<<endl;
    cout<<"Two players go alternatively and can pick up upto 3 stones."<<endl;
    cout<<"The player to pick up the last stone wins."<<endl<<endl;
    cout<<"Enter the number of stones: ";
    cin>>N;
    int ans=Nimgame(N);
    if(ans){
        cout<<"2nd person wins";
    }
    else{
        cout<<"1st person wins";
    }
    return 0;
}