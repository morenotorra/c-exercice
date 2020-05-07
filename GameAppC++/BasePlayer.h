class BasePlayer
{
// Atribut protected de "life". 
protected:
	float life;

public:

	// S'instancien els BasePlayer() i els seus atributs. 
	BasePlayer();
	BasePlayer(float custom_life);
	~BasePlayer();

	// S'instancien les funcions creades al BasePlayer i el getter de life. 
	void RecieveDamage(float damage);
	void ApplyDamage(BasePlayer* punter, float damage);
	float getLife();
};