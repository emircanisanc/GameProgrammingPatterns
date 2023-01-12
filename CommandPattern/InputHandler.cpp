class InputHandler
{
public:
	void handleInput();
	// Methods to bind commands...
private:
	Command* buttonX_;
	Command* buttonY_;
	Command* buttonA_;
	Command* buttonB_;

	Command* InputHandler::handleInput()
	{
		if (isPressed(BUTTON_X)) return buttonX_;
		else if (isPressed(BUTTON_Y)) return buttonY_;
		else if (isPressed(BUTTON_A)) return buttonA_;
		else if (isPressed(BUTTON_B)) return buttonB_;

		return null;
	}

	void InputHandler::Update()
	{
		Command* command = inputHandler.handleInput();
		if (command)
		{
			command->execute(actor);
		}
	}

	Command* handleInput()
	{
		Unit* unit = getSelectedUnit();
		if (isPressed(BUTTON_UP)) {
			// Move the unit up one.
			int destY = unit->y() - 1;
			return new MoveUnitCommand(unit, unit->x(), destY);
		}
		if (isPressed(BUTTON_DOWN)) {
			// Move the unit down one.
			int destY = unit->y() + 1;
			return new MoveUnitCommand(unit, unit->x(), destY);
		}
		// Other moves...
		return NULL;
	}
};