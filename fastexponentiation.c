ull m(ull a,ull b,ull c)
{
	if(a==0)
	return 0;
	ull ans=1;
	a=a%c;
	while(b>0)
	{
		if(b%2==1)
		ans=(ans*a)%c;
		
		a=(a*a)%c;
		b=b/2;
	}
return ans%c;
}

