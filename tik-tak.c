#include <stdio.h>

int main(){

		int number;

		printf("-= Problem set 01! =-\n");
		printf("Number [1-9999]: ");
		scanf("%d", &number);
		printf("You have entered: %d\n", number);

		if( number > 0 && number < 10000 )
				;
		else{
				printf("-1\n");
				return 1;
		}
		

		for( int i=1; i<number+1; i++  ){
			if( (i%3 == 0) && (i%5 == 0) )
					printf("tiktak\n");
			else if( i%3 == 0 )
					printf("tik\n");
			else if( i%5 == 0 )
					printf("tak\n");
			else
					printf("%d\n", i);
		}

		return 0;
}
