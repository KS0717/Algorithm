#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int N;
string arr[1001];

int getSum(string a){
    int l=a.length(),sum=0;

    for(int i=0;i<l;++i){
        if(9 >= a[i]-'0' && a[i]-'0' >= 0){
            sum+=a[i]-'0';
        }
    }
    return sum;
}

bool compare(string a, string b){
    if(a.length() < b.length()){
        return 1;
    }
    else if(a.length() > b.length()){
        return 0;
    }
    else{
        if(getSum(a) < getSum(b))
            return 1;
        else if(getSum(a) > getSum(b))
            return 0;
        else
            return a < b;
    }
}

int main(){
    cin>>N;
    for(int i=0;i<N;++i){
        cin>>arr[i];
    }
    sort(arr,arr+N,compare);
    for(int i=0;i<N;++i)
        cout<<arr[i]<<endl;
}