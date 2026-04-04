#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=1;i<N;i++){
        if( i == 1 || i == N){
            cout << "*****"<<endl;}
        else{
            cout << "+++++" << endl;
        }
        
    }
    return 0;


}
