#include <stdio.h>

int N,arr[10001],tmp;

int main(){
    scanf("%d",&N);
    for(int i=1;i<=N;++i){
        scanf("%d",&tmp);
        ++arr[tmp];
    }
    for(int i=1;i<=10000;++i){
        for(int j=0;j<arr[i];++j){
            printf("%d\n",i);
        }
    }
}