n,*s,i=0,j;main(a,b)char**b;{n=atoi(b[1]),s=malloc(n*4);for(;i<n;)s[i++]=1;for(i=0;i<atoi(b[2])&&printf("%d ",s[0])&&(a=s[0]);++i,s[n-1]=a)for(j=0;j<n-1;)a+=s[j++]=s[j+1];puts("");}
