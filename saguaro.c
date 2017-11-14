#define T "%5s %s\n"
#define U puts("    | |");
i,v,x,y;main(a,b)char**b;{puts("     _");puts("    / \\");char*s="|";for(i=1;i<a;++i,printf(T T T T T T,x?"_  |":s,y?"|  _":s,x?"/ \\ |":s,y?"| / \\":s,x?"| | |":s,y?"| | |":s,x?"\\ \\_|":s,y?"|_/ /":s,x?"\\__ ":s,y?" __/":s,x?"\\":s,y?"/":s))v=atoi(b[i]),x=v&2,y=v&1;U U}
