/* ZQU OJ 1359 */
#include <iostream>
using namespace std;
const int MAX = 100000+5;
int main()
{
	int n;
	int A[MAX];
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> A[i];

	for(int i=1; i<n; i++) {
        bool ex = false;
		for(int j=0; j<n-1; j++) {
			if(A[j] > A[j+1]) {
				int tmp = A[j];
				A[j] = A[j+1];
				A[j+1] = tmp;
				ex = true;
			}
		}
		for(int k=0; k<n-1; k++)
			cout << A[k] << ' ';
		cout << A[n-1] << endl;
        if(!ex)
            break;
	}
}
