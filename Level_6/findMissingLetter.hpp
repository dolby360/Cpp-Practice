#include <stdio.h>

char findMissingLetter(char array[], int arrayLength){
    int i = 0;
    int prev = 0;
    for(i = 1 ; i < arrayLength ; i++, prev++ ){
        if( array[i] - array[prev] > 1 ){
            return (char)( (array[i] - 1) );
        }
    }
    return ' ';
}