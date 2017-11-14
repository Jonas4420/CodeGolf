p,q,m,n;main(i,b)char**b;{m=p=atoi(b[1]),n=q=atoi(b[2]);while(m)i=m,m=n%m,n=i;m=(p*q)/n;for(i=m;i;--i)putchar((m-i+1)%p?45:124);puts("");for(i=m;i;--i)putchar((m-i+1)%q?45:124);puts("");}
