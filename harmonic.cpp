#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int N;
    cin >> N;
    double sum = 0.0;
    for(int i = 1; i<=N;i++){
        if(i % 2 ==0)
            sum += 1.0 / i;
        else
            sum -= 1.0 /i;
        

    }
    cout << fixed << setprecision(5) << sum;
    return  0;
}
