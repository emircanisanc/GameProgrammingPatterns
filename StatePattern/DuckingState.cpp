class DuckingState : public HeroineState
{
public:
	DuckingState()
		: chargeTime_(0)
	{}
	HeroineState* DuckingState::handleInput(Heroine& heroine,
		Input input)
	{
		if (input == RELEASE_DOWN)
		{
			heroine.setGraphics(IMAGE_STAND);
			return new StandingState();
		}
		// Other code...
	}
	virtual void update(Heroine& heroine) {
		chargeTime_++;
		if (chargeTime_ > MAX_CHARGE)
		{
			heroine.superBomb();
		}
	}
	
private:
	int chargeTime_;
};