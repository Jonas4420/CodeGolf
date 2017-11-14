i=0,j,w,h;main(a,b)char**b;{for(w=atoi(b[1]),h=2*atoi(b[2]);i<h;puts(""),++i)for(j=0;j<w;++j)putchar(i?(i-h+1?(j?32:(i%2?92:47)):92):47),putchar(i?(i-h+1?(j-w+1?32:(i%2?47:92)):47):92);}
