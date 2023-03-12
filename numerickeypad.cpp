#include<bits/stdc++.h>
using namespace std;

#define nn                    '\n' 
#define pb                    push_back 
#define SS                    stringstream 
#define ull                   unsigned long long 
#define mod                   1000000007 
#define INF                   2147483647 
#define SIZE                  2000001  
#define sf1(a)                scanf("%d", &a) 
#define sf2(a,b)              scanf("%d %d",&a, &b) 
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c) 
#define sf4(a,b,c, d)         scanf("%d %d %d %d", &a, &b, &c, &d)
 #define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)
#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)
#define lli long long int
#define pb push_back
#define f first
#define sec second

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<Sequence(s)<<endl;
    }
	return 0;
}

string Sequence(string S)
{
    vector<string> mapping = {"2", "22", "222", "3", "33", "333", "4", "44", "444", "5", "55", "555", "6", "66", "666", "7", "77", "777", "7777", "8", "88", "888", "9", "99", "999", "9999"};
    
    string result;
    for (auto i : S) {
        if (i == ' ') {
            result += '0';
            continue;
        }
        result += mapping[i - 'A'];
    }
    
    return result;
}
	
