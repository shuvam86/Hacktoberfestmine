#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b) {
    int t=*a;
    *a=*b;
    *b=t;
}

void selectionSort(int a[],int n) {
    int min,i,j;
    for( i=0;i<n;i++) {
        min=i;
        for( j=i+1;j<n;j++) {
            if(a[j]<a[min]) {
                min=j;
            }
        }
        swap(&a[min],&a[i]);
    }
    
    for(int i=0;i<n;i++)    
        cout<<a[i]<<" ";
     
 }


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)    
        cin>>a[i];
    selectionSort(a,n);
    
    return 0;
}
