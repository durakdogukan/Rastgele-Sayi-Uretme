//4 Basamakli 100 adet Rastgele sayi uretme

#include <iostream>
#include <cstdlib> //for rand(),srand
#include <ctime> //for time
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
	cout << "4 Basamakli 100 Tane Rastgele Sayi Ureten Program \n\n";
	srand(time(NULL));
	for (int i=1;i<=100;i++)
		cout << rand()%8999+1000 << "  ";
		
getch();
return 0;
}

