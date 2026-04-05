#include<simplecpp>
main_program(){
    int N;
    cin >>N;
    double sum = 0.0;
    int sign = 1;
    int denom = 1;

    for(int i =0; i <N;i++){
        sum += sign * (1.0 / denom);
        sign = -sign;
        denom +=2;

    }
    cout << 4*sum;

}
