class Command
{
public:
	virtual ~Command() {}
	virtual void execute(GameActor& actor) = 0;
	virtual void undo() = 0;
};