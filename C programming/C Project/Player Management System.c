//Player Management System to efficiently manage information about Cricket players.
//Requirements:-1)Add player 2)Remove player 3)Search player by Jersey number and Name 4)Update player data  5)Display sorted players 6)Display All players

#include<stdio.h>
#include<string.h>

typedef struct player {
	int jerseyno;
	char name [30];
	int runs;
	int wickets;
	int matches;

} player;


//void storeplayer(player*,int );
void hardcodeplayers(player*,int );
void displayplayer(player*,int );
int searchjerseyno(player*,int,int );
int searchname(player*,int,char* );
void removeplayer(player*, int*, int );
void addplayer(player*, int* );
void updateplayer(player*, int);
void sortbyruns(player*, int ) ;
void sortbywickets(player*, int);

void main()

{
	player players[100];
	int i=0;
	//int size;
	int size=5;
	int choice;

	printf("         ****Welcome to Player Manangement  System****\n");

	hardcodeplayers(players,size);

//	printf("\nEnter the number of player you want Enter in the System: ");
//	scanf("%d",&size);
//	getchar();

	//storeplayer(players,size);

	do {
		printf("\n-------- MENU --------\n");
		printf("1. Display All Players\n");
		printf("2.Search by Jersey Number \n");
		printf("3. Search by Name\n");
		printf("4. Remove Player\n");
		printf("5. Add New Player\n");
		printf("6. Update a Player\n");
		printf("7. Display Sorted Players\n");
		printf("8. Exit\n");
		scanf("%d", &choice);
		getchar();

		if(choice==1)
			displayplayer(players,size);

		else if (choice==2) {

			int jerseyno;
			printf("\nEnter the Jersey number of player you want to search:");
			scanf("%d",&jerseyno);
			getchar();
			int index=searchjerseyno(players,size,jerseyno);
			if(index!=-1)
				printf("%s  found at %d index\n",players[index].name,index);

			else
				printf("\nPlayer not found\n");
		}

		else if(choice==3) {

			char name[30];
			printf("\nEnter the Name of the player you want to Search:\n");
			fgets(name,sizeof(name),stdin);
			name[strcspn(name,"\n")]='\0';

			int nameindex=searchname(players,size,name);
			if(nameindex!=-1)
				printf("\n %s found at index %d(Jersey:%d)\n",players[nameindex].name,nameindex,players[nameindex].jerseyno);
			else
				printf("\nPlayer with name %s not found",name);
		}

		else if(choice==4) {

			int Jerseyno;
			printf("\nEnter the Jersey Number of the Player you want to remove:");
			scanf("%d",&Jerseyno);
			getchar();

			removeplayer(players,&size,Jerseyno);
			displayplayer(players,size);
		}

		else if(choice==5) {
			addplayer(players,&size);
		}

		else if(choice==6) {
			updateplayer(players,size);
		}



		else if(choice == 7) {
			int option;
			printf("\nSort by:\n1. Runs\n2. Wickets\nEnter your choice: ");
			scanf("%d", &option);
			getchar();

			if (option == 1)

				sortbyruns(players, size);

			else if (option == 2)

				sortbywickets(players, size);


		}

	} while (choice != 8);
	printf("\nThank you for using Player Management System. Goodbye!\n");


}
void storeplayer(player*ptr,int size) {
	for(int i=0; i<size; i++) {
		printf("\nEnter the Jersey Number of player %d:",i+1);
		scanf("%d",&ptr[i].jerseyno);
		getchar();

		printf("\nEnter the Name of the player :");
		fgets(ptr[i].name,sizeof(ptr[i].name),stdin);
		ptr[i].name[strcspn(ptr[i].name,"\n")]='\0';

		printf("\nEnter the Runs of the player:");
		scanf("%d",&ptr[i].runs);

		printf("\nEnter the Wickets of the player:");
		scanf("%d",&ptr[i].wickets);

		printf("\nEnter the Matches played by the player:");
		scanf("%d",&ptr[i].matches);

		printf("\n****Player Added Successfully****\n");
		printf("\n");

	}
}




void displayplayer(player*ptr,int size) {
	for(int i=0; i<size; i++) {
		printf("\n---- Player %d----\n",i+1);
		printf("\n");

		printf("The Jersey number is:%d\n",ptr[i].jerseyno);
		printf("The Name is:%s\n",ptr[i].name);
		printf("The Runs are:%d\n",ptr[i].runs);
		printf("The Wickets are:%d\n",ptr[i].wickets);
		printf("The Matches played:%d\n",ptr[i].matches);

	}

}

int searchjerseyno(player* ptr,int size,int jerseyno) {

	for(int i=0; i<size; i++) {
		if(ptr[i].jerseyno==jerseyno)
			return i;

	}

	return -1;

}

int searchname(player*ptr,int size,char* name) {

	for(int i=0; i<size; i++) {
		if(strcmp(ptr[i].name,name)==0)
			return i;
	}
	return -1;



}

void removeplayer(player* ptr, int* size, int jerseyno) {
	int index = searchjerseyno(ptr, *size, jerseyno);
	if (index == -1) {
		printf("\nPlayer with jersey number %d not found.\n", jerseyno);
		return;
	}

	for (int i = index; i < *size - 1; i++) {
		ptr[i] = ptr[i + 1];
	}
	(*size)--;

	printf("\nPlayer Removed Successfully\n");

}


void hardcodeplayers(player* ptr, int size) {


	ptr[0].jerseyno = 18;
	strcpy(ptr[0].name, "Virat Kohli");
	ptr[0].runs = 28000;
	ptr[0].wickets = 25;
	ptr[0].matches = 300;

	ptr[1].jerseyno = 7;
	strcpy(ptr[1].name, "MS Dhoni");
	ptr[1].runs = 17000;
	ptr[1].wickets = 7;
	ptr[1].matches = 360;

	ptr[2].jerseyno = 45;
	strcpy(ptr[2].name, "Rohit Sharma");
	ptr[2].runs = 20000;
	ptr[2].wickets = 50;
	ptr[2].matches = 310;

	ptr[3].jerseyno = 93;
	strcpy(ptr[3].name, "Jasprit Bumrah");
	ptr[3].runs = 2000;
	ptr[3].wickets = 300;
	ptr[3].matches = 200;

	ptr[4].jerseyno = 17;
	strcpy(ptr[4].name, "Hardik Pandya");
	ptr[4].runs = 5000;
	ptr[4].wickets = 200;
	ptr[4].matches = 180;

}


void addplayer(player* ptr, int* size) {
	if (*size >= 100) {
		printf("\nCannot add more players. Limit reached.\n");
		return;
	}

	printf("\nEnter the Jersey Number of the new player: ");
	scanf("%d", &ptr[*size].jerseyno);
	getchar();

	printf("Enter the Name of the new player: ");
	fgets(ptr[*size].name, sizeof(ptr[*size].name), stdin);
	ptr[*size].name[strcspn(ptr[*size].name, "\n")] = '\0';

	printf("Enter the Runs scored by the player: ");
	scanf("%d", &ptr[*size].runs);

	printf("Enter the Wickets taken by the player: ");
	scanf("%d", &ptr[*size].wickets);

	printf("Enter the Matches played by the player: ");
	scanf("%d", &ptr[*size].matches);

	(*size)++;

	printf("\n*** Player Added Successfully! ***\n");

}

void updateplayer(player* ptr, int size) {
	int jerseyno;
	printf("\nEnter the Jersey Number of the player to update: ");
	scanf("%d", &jerseyno);
	getchar();

	int index = searchjerseyno(ptr, size, jerseyno);
	if (index == -1) {
		printf("Player with Jersey Number %d not found.\n", jerseyno);
		return;
	}

	printf("\n--- Updating Player: %s ---\n", ptr[index].name);

	printf("Current Runs: %d\n", ptr[index].runs);
	printf("Enter new Runs: ");
	scanf("%d", &ptr[index].runs);

	printf("Current Wickets: %d\n", ptr[index].wickets);
	printf("Enter new Wickets: ");
	scanf("%d", &ptr[index].wickets);

	printf("Current Matches: %d\n", ptr[index].matches);
	printf("Enter new Matches: ");
	scanf("%d", &ptr[index].matches);

	printf("\n*** Player data updated successfully! ***\n");


}

void sortbyruns(player* ptr, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (ptr[j].runs < ptr[j + 1].runs) {
				player temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
	printf("\n*** Players Sorted by Runs  ***\n");
	displayplayer(ptr, size);
}

void sortbywickets(player* ptr, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (ptr[j].wickets < ptr[j + 1].wickets) {
				player temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
	printf("\n*** Players Sorted by Wickets  ***\n");
	displayplayer(ptr, size);
}
