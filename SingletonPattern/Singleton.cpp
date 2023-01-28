class Singleton
{
public:
	static Singleton& instance()
	{
		// Lazy initialize.
		if (instance_ == NULL) instance_ = new Singleton();
		return *instance_;
	}
private:
	Singleton() {}
	static Singleton* instance_;
};