

#include<iostream>

using namespace std;


int sumOfCube(int sum, int n){
if (n<=0){
    return sum;
}
return sumOfCube(sum + n*n*n, n-1);
}


int sumOfCube(int n){
    return sumOfCube(0,n);
}



// int main(){


//     cout << sumOfCube(4) << endl;
// }