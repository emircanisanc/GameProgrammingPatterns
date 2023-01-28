public class Heroine
{
private
	void Heroine::handleInput(Input input)
	{
		HeroineState* state = state_->handleInput(*this, input);
		if (state != NULL)
		{
			delete state_;
			state_ = state;
		}
	}
};