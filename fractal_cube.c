f(**g,n,x,y,s,i,j){if(!n)g[x][y]='X';else for(s=pow(3,n-1);i--;)for(j=3;j--;)if(i*j^1)f(g,n-1,x+s*i,y+s*j,0,3,0);}

int
main(int argc, const char *argv[])
{
	int n = atoi(argv[1]);
	int m = pow(3, n);

	int **grid = calloc(m, sizeof(int*));
	for ( int i = 0 ; i < m ; ++i ) {
		grid[i] = calloc(m, sizeof(int));

		for ( int j = 0 ; j < m ; ++j ) {
			grid[i][j] = ' ';
		}
	}

	f(grid, n, 0, 0,0,3,0);
	
	for ( int i = 0 ; i < m ; ++i ) {
		for ( int j = 0 ; j < m ; ++j ) {
			printf("%c", grid[i][j]);
		}
		printf("\n");
	}
	
	for ( int i = 0 ; i < m ; ++i ) {
		free(grid[i]);
	}
	free(grid);
}
