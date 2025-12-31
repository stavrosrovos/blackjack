#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char print_card(void);
void player_play(void);
void dealer_play(void);
void who_is_the_winner(void);
int sum_dealer=0,sum=0,aces_dealer=0;
int main(void)
{
	char ch;
	int card_worth;
	srand(time(NULL));
	printf("Kalws hrthes sto blackjack!\n");
	ch = print_card();
	if(ch = 'A')
		aces_dealer++;
		
	printf("To prwto fyllo ths manas einai to %c\n",ch);
	switch(ch)
	{
		case 'A':
		card_worth=1;
		break;
		
		case '2':
		card_worth = 2;
		break;
		
		case '3':
		card_worth = 3;
		break;
		
		case '4':
		card_worth = 4;
		break;
		
		case '5':
		card_worth = 5;
		break;
		
		case '6':
		card_worth = 6;
		break;
		
		case '7':
		card_worth = 7;
		break;
		
		case '8':
		card_worth = 8;
		break;
		
		case '9':
		card_worth = 9;
		break;
		
		case '1':
		card_worth = 10;
		break;
		
		case 'J':
		card_worth = 10;
		break;
		
		case 'Q':
		card_worth = 10;
		break;
		
		case 'K':
		card_worth = 10;
		break;
	}
	sum_dealer += card_worth;
	player_play();
	dealer_play();
	return 0;
}
char print_card(void)
{
	int ch;
	ch = 1 + rand()%13;
	switch(ch)
	{
		case 1:
		return 'A';
		
		case 2:
		return '2';
		
		case 3:
		return '3';
		
		case 4:
		return '4';
		
		case 5:
		return '5';
		
		case 6:
		return '6';
		
		case 7:
		return '7';
		
		case 8:
		return '8';
		
		case 9:
		return '9';
		
		case 10:
		return '1';
		
		case 11:
		return 'J';
		
		case 12:
		return 'Q';
		
		case 13:
		return 'K';
	}
}
void player_play(void)
{
	int a,card_worth,aces=0;
	char first_card,sec_card,ch;
	first_card = print_card();
	switch(first_card)
	{
		case 'A':
		if(aces==1)
			card_worth=11;
		else 
			card_worth=1;
		break;
		
		case '2':
		card_worth = 2;
		break;
		
		case '3':
		card_worth = 3;
		break;
		
		case '4':
		card_worth = 4;
		break;
		
		case '5':
		card_worth = 5;
		break;
		
		case '6':
		card_worth = 6;
		break;
		
		case '7':
		card_worth = 7;
		break;
		
		case '8':
		card_worth = 8;
		break;
		
		case '9':
		card_worth = 9;
		break;
		
		case '1':
		card_worth = 10;
		break;
		
		case 'J':
		card_worth = 10;
		break;
		
		case 'Q':
		card_worth = 10;
		break;
		
		case 'K':
		card_worth = 10;
		break;
	}
	sum += card_worth;
	if(first_card == 'A')
		aces++;
	if(first_card=='1')
		printf("To prwto fyllo soy einai to 10\n");
	else
		printf("To prwto fyllo soy einai to %c\n",first_card);
		
	sec_card = print_card();
	switch(sec_card)
	{
		case 'A':
		if(aces==1)
			card_worth=11;
		else 
			card_worth=1;
		break;
		
		case '2':
		card_worth = 2;
		break;
		
		case '3':
		card_worth = 3;
		break;
		
		case '4':
		card_worth = 4;
		break;
		
		case '5':
		card_worth = 5;
		break;
		
		case '6':
		card_worth = 6;
		break;
		
		case '7':
		card_worth = 7;
		break;
		
		case '8':
		card_worth = 8;
		break;
		
		case '9':
		card_worth = 9;
		break;
		
		case '1':
		card_worth = 10;
		break;
		
		case 'J':
		card_worth = 10;
		break;
		
		case 'Q':
		card_worth = 10;
		break;
		
		case 'K':
		card_worth = 10;
		break;
	}
	sum += card_worth;
	if(sec_card == 'A')
		aces++;
	if(sec_card=='1')
		printf("To deytero fyllo soy einai to 10\n");
	else
		printf("To deytero fyllo soy einai to %c\n",sec_card);
		
	if((first_card == 'A' && (sec_card == 'J' || sec_card == 'Q' || sec_card == 'K' || sec_card == '1')) || (sec_card == 'A' && (first_card == 'J' || first_card == 'Q' || first_card == 'K' || first_card == '1')))
	{
		printf("Ekanes blackjack! Kerdises!");
		exit(0);
	}
	else
	{
		printf("Exeis synolo %d\n",sum);
	}
	while(1)
	{
		do {
			printf("Thes allo ena fyllo; (pata 1 an nai h 0 an oxi) ");
			scanf("%d",&a);	
			if(a!=0 && a!=1)
				printf("Lathos! Jana plhktrologhse!\n");
		} while(a!=0 && a!=1);
		
		if(a==1)
		{
			ch = print_card();
			switch(ch)
			{
				case 'A':
				if(aces==1)
					card_worth=11;
				else 
					card_worth=1;
				break;
				
				case '2':
				card_worth = 2;
				break;
				
				case '3':
				card_worth = 3;
				break;
				
				case '4':
				card_worth = 4;
				break;
				
				case '5':
				card_worth = 5;
				break;
				
				case '6':
				card_worth = 6;
				break;
				
				case '7':
				card_worth = 7;
				break;
				
				case '8':
				card_worth = 8;
				break;
				
				case '9':
				card_worth = 9;
				break;
				
				case '1':
				card_worth = 10;
				break;
				
				case 'J':
				card_worth = 10;
				break;
				
				case 'Q':
				card_worth = 10;
				break;
				
				case 'K':
				card_worth = 10;
				break;
			}
			sum += card_worth;
			if(ch == 'A')
				aces++;
			if(ch =='1')
			{
				printf("To fyllo soy einai to 10\n");
				printf("Exeis synolo %d\n",sum);
			}
			else
			{
				printf("To fyllo soy einai to %c\n",ch);
				printf("Exeis synolo %d\n",sum);
			}				
		}
		else 
			break;
				
		if(sum>21)
		{
			printf("Kahkes!");
			exit(0);
		}
	} 
}
void dealer_play(void)
{
	int card_worth;
	char ch;
	while(1)
	{
		ch = print_card();
		switch(ch)
		{
			case 'A':
			if(aces_dealer==1)
				card_worth=11;
			else 
				card_worth=1;
			break;
			
			case '2':
			card_worth = 2;
			break;
			
			case '3':
			card_worth = 3;
			break;
			
			case '4':
			card_worth = 4;
			break;
			
			case '5':
			card_worth = 5;
			break;
			
			case '6':
			card_worth = 6;
			break;
			
			case '7':
			card_worth = 7;
			break;
			
			case '8':
			card_worth = 8;
			break;
			
			case '9':
			card_worth = 9;
			break;
			
			case '1':
			card_worth = 10;
			break;
			
			case 'J':
			card_worth = 10;
			break;
			
			case 'Q':
			card_worth = 10;
			break;
			
			case 'K':
			card_worth = 10;
			break;
		}
		sum_dealer += card_worth;
		if(ch == 'A')
			aces_dealer++;
		if(ch =='1')
		{
			printf("To fyllo ths manas einai to 10\n");
			printf("H mana exei synolo %d\n",sum_dealer);
		}
		else
		{
			printf("To fyllo ths manas einai to %c\n",ch);	
			printf("H mana exei synolo %d\n",sum_dealer);
		}
		
		if(sum_dealer>16)
			break;
	} 
	if(sum_dealer<=21)
		who_is_the_winner();
	else
	{
		printf("Kahke h mana! Kerdises!");
		exit(0);
	}		
}
void who_is_the_winner(void)
{
	if(sum>sum_dealer)
		printf("Kerdises!");
	else if(sum_dealer>sum)
		printf("Kerdise h mana!");
	else
		printf("Einai isopalia!");
}
