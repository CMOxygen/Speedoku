namespace GameLogic
{
	const int gameSize = 9;

	enum class CellStatus
	{
		VISIBLE,
		HIDDEN
	};
	class Cell
	{
	private:
		unsigned char value = 0;
		CellStatus status = CellStatus::VISIBLE;
		
	public:
		Cell();
		~Cell();
		inline unsigned int getSize() { return gameSize; }
		inline unsigned char getValue() { return this->value; }
	};
};