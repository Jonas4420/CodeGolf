n,*s,i,j,l,v;main(a,b)char**b;{n=atoi(b[1]);s=malloc(n*4);for(s[l=0]=i=j=1;i<n;s[i++]=v,--l)if(!l)v=s[i-1]^3,l=i^j?s[j]:v,++j;for(i=0;i<n;)printf("%d ",s[i++]);puts("");}
