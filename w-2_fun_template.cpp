//function templete 
#include <iostream>
using namespace std;
template <class T>
T findmax (T a,T b){
if(a>b){
return a;
}
else {
    return b;
}
}
int main(){
    cout<<"max of integer:"<<findmax(10,20)<<endl;
    cout<<"max of float:"<<findmax(5.5f,6.2f)<<endl;
    cout<<"max of characters:"<<findmax('A','Z')<<endl;
    return 0;
}


