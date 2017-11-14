s=-1,i;main(c,b)char**b;{for(;c=*b[1]++;s=(c==47)?s-1:s,printf("%c\n",c))if(s=s<0?0:(c==92?s+1:s))printf("%*c",s,32);}
