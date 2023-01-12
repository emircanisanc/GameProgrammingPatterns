class FireCommand : public Command
{
public:
	virtual void execute(GameActor& actor) {
		actor.fireGun();
	}
};