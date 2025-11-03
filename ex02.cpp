#include<iostream>
using namespace std;
int sum(int *a, int size){
    int suma=0;
    for(int* p = a;p<a+size;p++){
        suma=suma+*p;
    }
return suma;
}
    int main(){
int tab[5]={3,2,1,4,5};
cout << sum(tab,5)<<endl;
int tab1[5]={7,2,1,6,5};
int tab2[5]={3,1,1,2,5};
cout << sum(tab1,5)<<endl;
cout << sum(tab2,5)<<endl;
        return 0;
    }
