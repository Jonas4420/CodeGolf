i,j,h;char c[10];main(void){for(i=12;sprintf(c,"%d",i)&&i<=123456;++i){for(h=j=1;j<strlen(c)&&(h=c[j]-c[j-1]!=c[1]-c[0]?0:h);++j);if(c[1]-c[0]>0&&h)printf("%d\n",i);}}
