#define r return
s(n){r n*(n+1)/2;}t(n,a,b,j,k,z){for(;a<n;a+=b++);if(a==n)r 1;while(s(j++)<n);for(a=j,b=n;a;)k=s(a--),n>k&&(z=1+t(n-k,0,0,0,0,0),b=z<b?z:b);r b;}main(a,b)char**b;{printf("%d",t(atoi(b[1],0,0,0,0,0)));}
