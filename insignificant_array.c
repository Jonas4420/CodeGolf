i=2,m=0;main(d,b)char**b;{for(;b[i];m=d>m?d:m,++i)d=abs(atoi(b[i])-atoi(b[i-1]));puts(m<2?"true":"false");}
