class JumpCommand : public Command
{
public:
	virtual void execute(GameActor& actor) {
		actor.jump();
	}
};