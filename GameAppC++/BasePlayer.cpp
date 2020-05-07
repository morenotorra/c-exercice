#include "BasePlayer.h"

// Es crea el constructor de BasePlayer().
BasePlayer::BasePlayer() {

}

// Es crea un constructor que servirà per inicialitzar un objecte d'una determinada classe al mateix temps en què es declara.
BasePlayer::BasePlayer(float custom_life) {
	life = custom_life;
}

// Es crea un destructor que s'invocarà automàticament quan l'objecte surti de l'abast o sigui destruït explícitament.
BasePlayer::~BasePlayer() {
}

// Mètode per "rebre damage" que té com a variable d'entrada un float pel damage. 
void BasePlayer::RecieveDamage(float damage) {
	life -= damage;
}

// Mètode que usa un punter i que és usat per aplicar el damage causat. 
void BasePlayer::ApplyDamage(BasePlayer* punter, float damage) {
	punter->RecieveDamage(damage);
}

// Getter per poder agafar la vida. 
float BasePlayer::getLife() {
	return life;
}