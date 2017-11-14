i=1,m;main(a,b)char**b;{for(;i<a;++i)atoi(b[i^1?i-1:a-1])+atoi(b[i^a-1?i+1:1])>>1>=(m=atoi(b[i]))&&printf("%d ",m);puts("");}
