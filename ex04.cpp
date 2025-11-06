#include<iostream>
using namespace std;
int strin(const char* s){
 int a =0;
 while(*s != '\0'){
    a=a+1;
    s++;
 }
 return a;
}
    int main(){
        char str[]="hello";
        char str2[]="lijkkll";
        cout << strin(str)<< endl;
        cout << strin(str2)<< endl;
        return 0;
    }