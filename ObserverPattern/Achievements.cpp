class Achievements : public Observer
{
public:
	virtual void onNotify(const Entity& entity, Event event)
	{
		switch (event)
		{
		case EVENT_ENTITY_FELL:
			if (entity.isHero() && heroIsOnBridge_)
			{
				unlock(ACHIEVEMENT_FELL_OFF_BRIDGE);
			}
			break;
			// Handle other events, and update heroIsOnBridge_...
		}
	}
private:
	void unlock(Achievement achievement)
	{
		// Unlock if not already unlocked...
	}
	bool heroIsOnBridge_;
};