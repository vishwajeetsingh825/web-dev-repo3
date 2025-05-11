#include<iostream>
using namespace std;

int main(){

    int n, sum;
    cin>>n;

    

    for(int i = 2; i<=n; i+=2){
        sum += i;
        
   

        cout<<"sum of n numbers :"<<sum<<endl;

    }
    return 0;
}