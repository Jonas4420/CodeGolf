s=0;main(c,b)char**b;{while(c=*b[1]++)if(!s&&c^32)s=1,putchar(c);else if(s&1&&c^32)putchar(c);else if(s&1)s=2;else if(c^32)s=1,putchar(32),putchar(c);}
