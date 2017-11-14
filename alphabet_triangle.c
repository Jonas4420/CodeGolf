j,k;main(i,b)char**b;{for(i=1;i<52;++i){j=(i<=26)?i:52-i;for(k=1;k<2*j;++k)putchar(64+((k<=j)?k:(2*j)-k));puts("");}}
