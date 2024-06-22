#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int N, row=1;
	cin>>N;
	while(row<=N)
	{
		int i=1;
		while(i<=N-row)
		{
			cout<<'\t';
			i=i+1;
		}
		int j=1, op1=row, other_part;
		while(j<=(2*row)-1)
		{
			if(op1<=(2*row)-1)
			{
				cout<<op1<<'\t';
				op1=op1+1;
				other_part=op1-2;
			}
			else
			{
				cout<<other_part<<'\t';
				other_part=other_part-1;
			}
			
			j=j+1;
		}
		cout<<endl;
		row=row+1;
	}
//Niche wala part:-		
	while(row<=(2*N)-1)
	{
		int k=1;
		while(k<=row-N)
		{
			cout<<'\t';
			k=k+1;
		}
		int l=1;
		int counter=(2*N)-row;
		int ans=counter;
		int other_part1;
		while(l<=(4*N)-(2*row)-1)
		{
			int result=other_part1;
            if(ans<=(2*counter)-1)
			{
				cout<<ans<<'\t';
				ans=ans+1;
				other_part1=ans-2;
			}
			else if(ans>(2*counter)-1)
			{
				cout<<other_part1<<'\t';
				//result=result-1;
				other_part1--;
			}
			
			l=l+1;
		}
		cout<<endl;
		row=row+1;
	}
	return 0;
}