//Convert time entered in hours , mins and secs into total secs 


void main(){
	 int hours,mins,secs;
	 
	 printf("Enter hours :");
	 scanf("%d",&hours);
	 
	 printf("Enter minutes :");
	 scanf("%d",&mins);
	 
	 printf("Enter seconds :");
	 scanf("%d",&secs);
	 
	 int t_sec= hours*60*60 +mins*60+secs;
	 
	 printf("The total seconds= %d", t_sec);
	 
	
	

}