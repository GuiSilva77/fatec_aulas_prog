#include <iostream>
using namespace std;


int calc3(int m[9]){
    int det, a11, A11, a12, A12, a13, A13;
    a11=m[1];
    a12=m[2];
    a13=m[3];

    A11 = (-1)*((m[4]*m[8])*(m[4]*m[7]));
    A12 = (-1)*((m[3]*m[8])*(m[5]*m[6]));
    A13 = (-1)*((m[3]*m[7])*(m[4]*m[6]));

    det = (a11*A11)+(a12*A12)+(a13*A13);



    return det;
}

int main(){
    int m[8];

    for(int i=0; i<9;i++)
      cin >> m[i];

    int det, a11, A11, a12, A12, a13, A13;
    a11=m[0];
    a12=m[1];
    a13=m[2];

    A11 = (-1)*((m[4]*m[8])*(m[4]*m[7]));
    A12 = (-1)*((m[3]*m[8])*(m[5]*m[6]));
    A13 = (-1)*((m[3]*m[7])*(m[4]*m[6]));

    det = (a11*A11)+(a12*A12)+(a13*A13);

    cout << det;

    return 0;
}
