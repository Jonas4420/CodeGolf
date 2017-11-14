i,n;main(s,b)char**b;{for(i=n=atoi(b[1]),s=0;i;--i)s+=i*(n-i+1)*(int)log10(i*10);printf("%d\n",s);}
