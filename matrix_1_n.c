i=0,j,m=0,c;main(a,b)char**b;{for(--a;i<a;m=c>m?c:m)c=atoi(b[++i]);for(i=1;i<=m;++i)for(j=0;j<a;++j)printf("%d%c",i>atoi(b[j+1])?0:i,j<a-1?32:10);}
