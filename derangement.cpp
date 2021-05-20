#include <bits/stdc++.h>
using namespace std;

int countDer(int n)
{
if (n == 1) return 0;
if (n == 2) return 1;
return (n - 1) * (countDer(n - 1) + countDer(n - 2));
}


void derangement(string a,string b, int l, int r)
{
	if ( l == r)
	{
	    int count =0;
	    for(int i=0;i<8;i++)
	    {
	        if(a[i]!=b[i])
	            count++;

	    }
	    if(count==8)
	    {
	        cout<<"{";
	        for(int i=0;i<8-1;i++)
	            cout<<a[i]<<",";
	        cout<<a[7]<<"}"<<endl;

	    }
	}

	else
	{
		for (int i = l; i <= r; i++)
		{
			swap(a[l], a[i]);

            derangement(a,b, l+1, r);

			swap(a[l], a[i]);
		}
	}
}

int main()
{
    int n1 = 8;
	cout << "The total number of Derangements for "<<n1<<" numbers is "<< countDer(n1)<<endl;
	string str = "12345678";
	int n = str.size();
	derangement(str,str, 0, n-1);
	return 0;
}
