#include <iostream>
#include <cmath>
using namespace std;



int main() {

    int number,digits=1,sum=0,temp;

    cout << "Hello, World! \nNumber:";
    cin>>number;
    temp=number;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    int digits_array[digits];

    temp=number;

    for (int i = 0; i < digits; i++) {
        digits_array[i] = temp % 10;
        temp /= 10;
    }

    for (int i = 0; i < digits; i++) {
        sum += pow(digits_array[i], digits);
    }

    if(sum==number){

        printf("%d is an Armstrong number.", number);
    }
    else{
        printf("%d is not an Armstrong number.", number);

    }



    return 0;
}
