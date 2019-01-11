#include <iostream>
using namespace std;
int main (){
    int num,i=6;
	double sum = 0;
    cout << "Enter the value of n:";
    cin >>num;
    while(i <= num){
        sum += 1.0/i;
        ++i;
    }
    cout << "Sum is:"<<sum;
    return 0;
}