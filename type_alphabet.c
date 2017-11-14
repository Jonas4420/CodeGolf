#include <stdlib.h>
d,l=3000,c,n=97;main(){struct timeval s,e;gettimeofday(&s,0);e=s;while (n<123&&(d=(1000*(e.tv_sec-s.tv_sec)+(e.tv_usec-s.tv_usec)/1000))<l){if((c=getchar())!=n)break;n++;gettimeofday(&e,0);}printf(n==123&&d<l?"%d\n":"Fail.\n",d);}
