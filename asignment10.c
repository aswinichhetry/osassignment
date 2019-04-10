
#include<stdio.h>

#define CURR_REQUEST 143

int absolutes(int numbers)
{

    return numbers>0?numbers:(numbers*-1);

}

int main()

{

    int queues[] = {86, 1470, 913, 1774, 948, 1509, 1022, 1750, 130};


    int a;


    int distances=0;


    int last = CURR_REQUEST;


    
    for(a=0;a<(sizeof(queues)/sizeof(queues[0]));a++)
        

        {

    	int currents = queues[a];


    	printf("Last(from cylinder) : %4d | Current(To cylinder): %4d | dist(seek time) : %4d\n",last,currents,absolutes(last - currents));


    	distances+= absolutes(last - currents);


    	last = currents;

        }

    printf("\n\tDistance(total seek time) : %d\n",distances);
    
    printf("\n\tSUCCESSFULLY RUN \n");
    
    return 0;

}
