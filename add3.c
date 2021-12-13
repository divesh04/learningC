
/* Read in three floats and print sum
Divesh Soni
December 12, 2021
*/

# include <stdio.h>

int main(void)

{
	float a,b,c, sum;
	printf("Input three floats: ");
	scanf("%f%f%f", &a, &b, &c);
	printf("a=%f , b=%f, c=%f \n",a,b,c);
	sum=a+b+c;
	printf("Sum is = %f\n\n",sum);
	return 0;
}

