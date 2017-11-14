i=0,j,n,l;main(a,b)char**b;{for(n=atoi(b[1]),l=atoi(b[2]);a=0,i<l;printf("%d ",a),++i)for(j=0;j<floor(n/l);++j)a+=(i+j*l<n?atoi(b[3+i+j*l]):0);puts("");}
