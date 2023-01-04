#include <iostream>

using namespace std;

int* multiplication(int *invers1, int *invers2, int* result, int n){
	for(int i=0;i<n;i++){
		result[i]=invers2[invers1[i] - 1];
	}
	return invers1;
}

int* reversing(int *invers, int *revers, int n){
	for(int i=0;i<n;i++){
		revers[invers[i]-1]=i + 1;
	}
	return revers;
}
int parity(int *invers, int n){
    int visited[n];
    int j;
    int len = 0, s = 0;
    for(int i=0; i<n; i++){
        visited[i]=0;
    }
    for(int i=0;i<n;i++){
        if(visited[i]==0){
            visited[i] = 1;
            len++;
            j = invers[i]-1;
            while(j != i){
                visited[j] = 1;
                len++;
                j = invers[j]-1;
            }
            s=(len%2)+1+s;
            len=0;
        }
    }
    return s;
}




int main() {
	int n;
	cin >> n;
	int *invers1, *invers2, *result, *revers;
	invers1 = new int[n];
	invers2 = new int[n];
	result = new int[n];
	revers = new int[n];
	cout << "First invers:\n";
	for(int i=0;i<n;i++){
		cin >> invers1[i];
	}
	cout << "Second invers:\n";
	for(int i=0;i<n;i++){
		cin >> invers2[i];
	}
	multiplication(invers1, invers2, result, n);
	reversing(invers1, revers, n);
	cout << "reversing:";
	for(int i=0;i<n;i++){
		cout << revers[i] << " ";
	}
	cout << "\nmultiplication:";
	for(int i=0;i<n;i++){
		cout << result[i] << " ";
	}
    int s = parity(invers1, n);
    cout << "\nParity is ";
    if(s%2==0)
        cout << " even";
    if(s%2==1)
        cout << " odd" ;
    return 0;
}
