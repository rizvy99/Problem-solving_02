//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;

ll LCM(ll a,ll b)
{
    return a/__gcd(a,b)*b;
}

ll getOne(ll a,ll m)
{
    return m/a;
}

ll getTwo(ll a,ll b,ll m)
{
    return m/LCM(a,b);
}

ll getThree(ll a,ll b,ll c,ll m)
{
    return m/LCM(LCM(a,b),c);
}

ll get(ll a,ll b,ll c,ll m)
{
    ll c1=getOne(a,m);
    ll c2=getTwo(a,b,m)+getTwo(a,c,m);
    ll c3=getThree(a,b,c,m);

    return (c1-c2+c3)*6
         +(c2-2*c3)*3
         +c3*2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        ll a,b,c,m;
        cin>>a>>b>>c>>m;

        cout<<get(a,b,c,m)<<" "
            <<get(b,a,c,m)<<" "
            <<get(c,a,b,m)<<el;
    }

    return 0;
}