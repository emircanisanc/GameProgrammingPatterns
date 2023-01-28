class HeroineState
{
public:
	virtual ~HeroineState() {}
	virtual void handleInput(Heroine& heroine, Input input) {}
	virtual void update(Heroine& heroine) {}
};