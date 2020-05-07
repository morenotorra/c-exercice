#include "BasePlayer.h"

// Es crea el constructor de BasePlayer().
BasePlayer::BasePlayer() {

}

// Es crea un constructor que servir� per inicialitzar un objecte d'una determinada classe al mateix temps en qu� es declara.
BasePlayer::BasePlayer(float custom_life) {
	life = custom_life;
}

// Es crea un destructor que s'invocar� autom�ticament quan l'objecte surti de l'abast o sigui destru�t expl�citament.
BasePlayer::~BasePlayer() {
}

// M�tode per "rebre damage" que t� com a variable d'entrada un float pel damage. 
void BasePlayer::RecieveDamage(float damage) {
	life -= damage;
}

// M�tode que usa un punter i que �s usat per aplicar el damage causat. 
void BasePlayer::ApplyDamage(BasePlayer* punter, float damage) {
	punter->RecieveDamage(damage);
}

// Getter per poder agafar la vida. 
float BasePlayer::getLife() {
	return life;
}