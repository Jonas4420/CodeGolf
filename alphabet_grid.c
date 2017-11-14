main(a,b)char**b;{char*w=b[1];for(a=64;*w;putchar(*w^a?32:*w++))a=a^90?a+1:putchar(10)+55;}
