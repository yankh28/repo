void bubble(int *ms, int k)
{
	int i,j,m;
	for (i=0; i<k-1;++i)
		for (j=k-1; j>i; --j)
		{
			if (ms[j-1]>ms[j])
			{
				m=ms[j-1];
				ms[j-1]=ms[j];
				ms[j]=m;
			}
		}
}
