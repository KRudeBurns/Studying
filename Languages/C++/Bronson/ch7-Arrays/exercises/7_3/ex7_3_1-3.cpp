/*
1. (Practice) The following declarations were used to create the grades array:
const int NUMGRADES = 500;
double grades[NUMGRADES];
 Write two different function headers for a function named sortArray() 
 that accepts the grades array as a parameter named inArray and returns 
 no value.
 */

const int NUMGRADES = 500;
double grades[NUMGRADES];

void sortArray(double [NUMGRADES])  // version 1

void sortArray(double [], NUMGRADES)  //version 2

void sortArray(double[], int)  // version 3  (NUMGRADES is not global)


/*
2. (Practice) The following declarations were used to create the keys array:
const int NUMKEYS = 256; 
char keys[NUMKEYS];

 Write two different function headers for a function named findKey() 
 that accepts the keys array as a parameter named select and returns a 
 character
*/

char findKey(char [NUMKEYS])   //version 1

char findKey(char [], NUMKEYS)  //version 2

char findKey(char [], int);   // v3 (NUMKEYS is not global)


