#include "functions.h"





int main (){
srand(time(NULL));  

    int size = 10;
    int list[10];

    populate(list, size);
    displayList (list , size);  //print ni 
    printf("\n");
    
  // int catcher = getMax (list,size);
   printf ("\nMax is: %d\n",getMax (list,size));
   printf ("Min is: %d\n",getMin (list,size));
   printf ("Mean is: %.2f\n", getMean (list,size));
   printf ("Median is: %.2f\n", getMedian (list ,size));
  

  int * catcher = getMode (list,size,&ModeCount);
    
    
   
    
    return 0;


}