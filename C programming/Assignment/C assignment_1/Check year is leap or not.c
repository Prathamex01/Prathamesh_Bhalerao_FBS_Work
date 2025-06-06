//Write a program to check the given year is a leap year


void main(){
	int year=2020;
	int leap;

	
	if(leap= year%4==0&&year%100!=0||year%400==0)
	{
		
	printf(" %d The year is a leap year",year);
	}
	
	else {
		
		printf(" %d The year is not a leap year",year);
	}
}