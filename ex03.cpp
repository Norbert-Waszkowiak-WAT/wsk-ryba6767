#include<iostream>
using namespace std;
void mini(int* arr, int size,int* min, int* max){
    *min=*arr;
    *max=*arr;
    for(int*p=arr;p<arr+5;p++){
        if(*p>*max){
            *max=*p;
        }
        if(*p<*min){
            *min=*p;
        }
    }

}
    int main(){
        int x,y;
            int tab[5]={1,5,10,12,200};
            mini(tab,5,&x,&y);
            cout << x<<" "<<y;
        return 0;
    }