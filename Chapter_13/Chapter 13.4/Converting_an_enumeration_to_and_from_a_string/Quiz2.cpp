enum Direction
{
	north,
	south,
	east,
	west,
};

constexpr std::string_view getDirectionName(Direction cd)
{
	switch (cd)
	{
	case north:	return "north";
	case south:	return "south";
	case east:	return "east";
	case west:	return "west";
	default:	return "direction invalid";
	}
}

constexpr std::optional<Direction> getDirectionFromString(std::string_view sv)
{
	if (sv == "north")	return north;
	if (sv == "south")	return south;
	if (sv == "east")	return east;
	if (sv == "west")	return west;

	return {};
}