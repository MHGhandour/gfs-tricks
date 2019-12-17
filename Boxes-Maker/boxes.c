#include<stdio.h>
 /*Creation of boxes a*b*c
COMMAND:
gcc boxes.c -o boxes.out && ./boxes.out - > boxes.txt
*/
int main()
{
   int a, b, c, box,i ,j, k, connection;
   scanf("%d%d%d",&a,&b,&c);


connection=0;

for ( i = 0; i < a*b*c; i=i+1 ) {
printf("GfsBox {}\n");
}

 for( k = 0; k < c; k = k + 1 )
{
	for( j = 0; j < b; j = j + 1 )
		{
		for( i = 0; i < a; i = i + 1 )
			{

		box = a*j+a*b*k+i+1;
 		if (i==0){
			printf("%d %d right\n",box,box+1);
			connection=connection+1;
			}
		if (i < a-2)
			{
			if (i%2 == 0)
				{
			printf("%d %d left\n",box,box+2);
			connection=connection+1;
				}
			else
				{
			printf("%d %d right\n",box,box+2);
			connection=connection+1;
				}
			}
/*--------------------------------------------------------------*/
		if (j==0)
			{
			printf("%d %d front\n",box,box+a);
			connection=connection+1;
			}
		if (j < b-2)
			{
			if (j%2 == 0)
				{
			printf("%d %d back\n",box,box+2*a);
			connection=connection+1;
				}
			else 
				{
			printf("%d %d front\n",box,box+2*a);
			connection=connection+1;
				}
			}

		if (k==0)
			{
			printf("%d %d top\n",box,box+b*a);
			connection=connection+1;
			}
		if (k < c-2)
			{
			if (k%2 == 0)
				{
			printf("%d %d bottom\n",box,box+2*b*a);
			connection=connection+1;
				}
			else 
				{
			printf("%d %d top\n",box,box+2*b*a);
			connection=connection+1;
				}

			}

		}
	}
 }
 
 printf("\n\n\n\nThe Number of connection is: %d",connection);
   return 0;
}
