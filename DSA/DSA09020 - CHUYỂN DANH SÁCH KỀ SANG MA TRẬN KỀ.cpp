#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	string s;
	vector<int> a[1001];
	cin>>n;

	for(int i=1;i<=n;i++)
	{
	scanf("\n");
	getline(cin,s);

	s+=" ";
	int k=s.size();
	for(int j=0;j<k;j++)
	{
	if(s[j]>='0' and s[j]<='9')
	{
	int so=0;
	while(s[j]>='0' and s[j]<='9'){
	so=so*10+s[j]-'0';
	j++;
	}
//	cout<<"so = "<<so<<endl;
	a[i].push_back(so);
	}
	}
	}
	for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
	if(find(a[i].begin(),a[i].end(),j)!=a[i].end())
    cout<<"1 ";
    else cout<<"0 ";
	}
	cout<<endl;
	}
}


