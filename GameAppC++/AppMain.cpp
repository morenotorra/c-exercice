#include <iostream>
#include "BasePlayer.h"

using namespace std;

int main()
{
	// Se li aplica 300 de vida al Player.
	BasePlayer player(300.0f);

	// Se li aplica 200 de vida a l'enemic. 
	BasePlayer EnrageEnemy(200.0f);

	BasePlayer* punterPlayer = &player;

	// El Player rebrà la quantitat de 40 d'atac, que és el que té EnrageEnemy. 
	EnrageEnemy.ApplyDamage(punterPlayer, 40.0f);

	// Es mostra per consola la vida que té el Player. 
	printf("PRIMERS EXERCICIS: ");
	printf("\n");

	cout << "PLAYER LIFE: " << punterPlayer->getLife() << endl;
	printf("\n");

	printf("LAST EXERCISE: ");
	printf("\n");
	// Variable on es desarà el text de l'usuari.
	char stringText[50], charValue;
	int comptadorX;

	// Es formula la primera pregunta. En aquest cas no és possible dir que no. 
	printf("Enter your username to start the game: ");
	comptadorX = 0;
	charValue = getchar();

	printf("");
	printf("");

	// Bucle que espera a que li facis ENTER i que captura el escriu l'usauri 
	while (charValue != '\n')
	{
		stringText[comptadorX] = charValue;
		comptadorX++;
		charValue = getchar();
	}

	stringText[comptadorX] = '\0';

	// Mostra el text del nom d'usuari i pregunta si l'usuari està segur que vol jugar. 
	printf("You are logged in as the user: %s", stringText);
	printf(". Are you sure you want to start the game?");
	printf("");

	// Pregunta a l'usuari si vol jugar o no. 
	printf("\nYES or NO: \n");
	char resultatJugar;
	resultatJugar = getchar();

	// Si el resultat és "YES" o semblant, entra al condicional que explica la història. 
	if (resultatJugar == 'Y' || resultatJugar == 'y' 
		|| resultatJugar == 'Yes' || resultatJugar == 'yes' || resultatJugar == 'YES')
	{
		// Es crea el BasePlayer que rebrà el dany en aquesta partida. 
		BasePlayer EnrageEnemy2(150.0f);
		BasePlayer* punterPlayer2 = &player;
		EnrageEnemy.ApplyDamage(punterPlayer2, 200.0f);

		printf("\nIt's September 11th. We are located in the city of the Catalan capital, Manresa.");
		printf("\nArnau is a boy who is partying at a nightclub called Stroika.");
		printf("\nHe has many friends in the party room, but there are also many enemies who want to kill him.");

		printf("\n");

		printf("\nThis boy has done many bad things, such as killing or raping the people of Manresa.");
		printf("\nHe is not a good person, so he has to be hurt.");

		printf("\n ");

		printf("\nSo the user: %s", stringText, "%s has grabbed a party cubata and threw it over his head.");
		printf("\nArnau is not dead, but he will be in the hospital for a long time and will not be able to continue with his misdeeds.");
		printf("\nArnau's life in the hospital is: %f", punterPlayer->getLife());
		printf(" of life.");

		printf("\n ");

		printf("\nThank you so much for being by our side in this fight. We will never forget you. VISCA CATALUNYA!");

		printf("\n ");
		printf("\n ");
	}

	// Si l'usuari escriu alguna altre cosa que no sigui "YES" es mostra un missatge d'acomiadament. 
	else {
		printf("\nWhen you are ready return to the game, we will be waiting for you.");

		printf("\n ");
		printf("\n ");
	}
}