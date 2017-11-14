i=0;main(n,b)char**b;{n=atoi(b[1]);for(;i<n*n;printf("%d%c",i/n+i%n+1&1,++i%n?0:10));}
