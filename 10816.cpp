#include <cstdio>
#include <algorithm>

using namespace std;
 
int *A;
int *M;
 
int lower_bound(int *B,int size,int target){
    int low=0,high=size-1,mid;

    while(high>low){
        mid=(low+high)/2;
        if(B[mid]>=target){
            high=mid;
        }
        else
            low=mid+1;
    }
    return high;
}
int upper_bound(int *B,int size,int target){
    int low=0,high=size-1,mid;

    while(high>low){
        mid=(low+high)/2;
        if(B[mid]>target){
            high=mid;
        }
        else
            low=mid+1;
    }
    return high;
}
 
int main() {
 
	int N,M_num,num,u,l;
 
	scanf("%d", &N);
 
	A = new int[N + 1];
 
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
 
	scanf("%d", &M_num);
 
	M = new int[M_num + 1];
 
	for (int i = 0; i < M_num; i++)
		scanf("%d", &M[i]);

    sort(A,A+N);

	for (int i = 0; i < M_num; i++) {
        u=upper_bound(A,N,M[i]);
        l=lower_bound(A,N,M[i]);
		num = u-l;
        if(u==N-1 && M[i]==A[N-1])
            ++num;
		printf("%d ", num);
	}
}