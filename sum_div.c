r=0,i=0;main(n,b)char**b;{n=atoi(b[1]);for(;i++<=n;r+=!(n%i)*i);printf("%d\n",r);}
