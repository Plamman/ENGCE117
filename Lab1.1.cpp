#include <stdio.h>

int main() {
    int n = 1 ;
    int Hello[n] ;

    printf( "Enter number: " ) ;
    scanf( "%d", &n ) ;

    for( int i = 0 ; i < n ; i++ ) {
        printf("[%d] Hello World\n",i+1 , Hello[n] ) ;
    }
    
    return 0 ;
}
