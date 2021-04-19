#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,h,l,mi;
    cin>>a>>b>>c>>h>>l;
    if(h>l){
    	// int aux=h;
    	// h=l;
    	// l=aux;
    	swap(h,l);
    }
    mi=min({a,b,c});
    if(a==mi)
    {
    	if(a<=h && (b<=l || c<=l))
    	{
    		cout<<"S\n";
    	}else
    	{
    		cout<<"N\n";
    	}
    }else if(b==mi)
   	{
   		if(b<=h && (a<=l || c<=l))
    	{
    		cout<<"S\n";
    	}else
    	{
    		cout<<"N\n";
    	}
   	}else
   	{
   		if(c<=h && (b<=l || a<=l))
    	{
    		cout<<"S\n";
    	}else
    	{
    		cout<<"N\n";
    	}
   	}
    return 0;
}