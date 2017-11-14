s(n,r){return n?s(n/10,r+n%10):r;}a(n,k){return k?(n=a(n,k-1))%2?s(n*n,0):(n/2)+1:n;}main(i,b)char**b;{for(i=0;a(atoi(b[1]),++i)-9;);printf("%d\n",i);}
