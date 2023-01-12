class MoveUnitCommand : public Command
{
public:
	MoveUnitCommand(Unit* unit, int x, int y)
		: unit_(unit),
		xBefore_(0),
		yBefore_(0),
		x_(x),
		y_(y)
	{}
	virtual void execute()
	{
		// Remember the unit's position before the move
		// so we can restore it.
		xBefore_ = unit_->x();
		yBefore_ = unit_->y();
		unit_->moveTo(x_, y_);
	}
	virtual void undo()
	{
		unit_->moveTo(xBefore_, yBefore_);
	}
private:
	Unit* unit_;
	int xBefore_, yBefore_;
	int x_, y_;
};