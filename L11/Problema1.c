#include<stdio.h>
#include<climits>
int main()
{
	int v[100], i, n, k, j, minim, nr, l, ok;

	printf("N="); scanf("%d", &n);
	printf("k(Numarul de $ disponibili)="); scanf("%d", &k);

	for (i = 1; i <= n; i++)
	{
		printf("v[%d]=", i); scanf("%d", &v[i]);
	}

	l = 0;
	nr = 0;
	j = n;
	
	while (j >= 1)
	{
		minim = INT_MAX;
		for (i = 1; i <= n; i++)
			if (v[i] <= minim && v[i]!=0)
			{
				minim = v[i];
				l = i;
			}
		v[l] = 0;

		ok = 1;
		do
		{

			if (k - minim >= 0 && l>=1)
			{
				k = k - minim;
				nr++;
				l--;
			}
			else ok = 0;

		} while (ok==1);

		j--;

	}
	printf("\n%d\n", nr);
	
	return 0;
}