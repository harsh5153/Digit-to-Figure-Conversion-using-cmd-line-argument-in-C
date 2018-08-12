#include<stdlib.h>
#include<stdio.h>
void one(int a){
	switch(a){
		case 1 : printf("One " );
				 break;
		case 2 : printf("Two " );
				 break;
		case 3 : printf("Three " );
				 break;
		case 4 : printf("Four " );
				 break;
		case 5 : printf("Five " );
				 break;
		case 6 : printf("Six " );
				 break;
		case 7 : printf("Seven " );
				 break;
		case 8 : printf("Eight " );
				 break;
		case 9 : printf("Nine " );
				 break;
		case 10 : printf("Ten " );
				 break;		 
		case 11 : printf("Eleven " );
				 break;
		case 12 : printf("Twelve " );
				 break;
		case 13 : printf("Thirteen " );
				 break;
		case 14 : printf("Fourteen " );
				 break;
		case 15 : printf("Fifteen " );
				 break;
		case 16 : printf("Sixteen " );
				 break;
		case 17 : printf("Seventeen " );
				 break;
		case 18 : printf("Eighteen " );
				 break;
		case 19 : printf("Nineteen " );
				 break;
		default : return;
	}
}
void two(int a){
	switch(a){
	    case 20 : printf("Twenty " );
				 break;	
		case 30 : printf("Thirty " );
				 break;
		case 40 : printf("Fourty " );
				 break;
		case 50 : printf("Fifty " );
				 break;
		case 60 : printf("Sixty " );
				 break;
		case 70 : printf("Sevety " );
				 break;
		case 80 : printf("Eighty " );
				 break;
		case 90 : printf("Ninety " );
				 break;
		default : return;
	}			 
}
void hun(){
	printf("Hundred ");
}
void thou(){
	printf("Thousand ");
}
void lac(){
	printf("Lakh ");
}
void cr(){
	printf("Crore ");
}
int main(int argc, char const *argv[])
{
	int t = 0,a[15] , ar[15];
	long int n = atol(argv[1]);
	long int temp = n;
	while(n != 0){
		ar[t] = n%10;
		n = n/10;
		t++;
	}
	int s = t;
	t = t-1;
	int p = t;
	for (int j = 0; j <=p; j++)
	{
		a[j] = ar[t];
		t--;
	}
	for (int i = 0; i <=p ; ++i)
	{
		printf("%d",a[i] );
	}
	printf(" = ");
	int k = 0;
	while(s != 0){
		if(s == 2 || s==5 || s == 7 || s == 9){
				if(10*a[k] + a[k+1] < 20)
					one(10*a[k] + a[k+1]);
				else{
				    one(10*a[k]);
					two(10*a[k]);
					one(a[k+1]);
			    }
				k = k+2;
				s = s-2;
				if(s+2 == 3)
					hun();
				else if(s+2 == 4 || s+2 == 5)
					thou();
				else if(s+2 == 6 || s+2 == 7)
					lac();
				else if(s+2 == 8 || s+2 == 9)
					cr();
		}
		else{
			one(a[k]);
			s--;
			k++;
			if(s+1 == 3)
				hun();
			else if(s+1 == 4 || s+1 == 5)
				thou();
			else if(s+1 == 6 || s+1 == 7)
				lac();
			else if(s+1 == 8 || s+1 == 9)
				cr();
		}
	}
}