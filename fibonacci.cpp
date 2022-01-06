#include <iostream>
#include <conio.h>
using namespace std;



int main(int argc, char const *argv[])
{
	int n, t1 = 0, t2 = 1, nextTerm = 0;

	cin>>n; // number of terms

	for (int i = 1; i<=n; i++)
	{
		// printing first two terms
		if (i == 1){
			cout<<t1<<", ";
			continue;
		}
		if (i == 2){
			cout<<t2<<", ";
			continue;
		}

		nextTerm = t1+t2;
		t1=t2;
		t2=nextTerm;

		cout<<nextTerm<<",";
	}

	return 0;
}
