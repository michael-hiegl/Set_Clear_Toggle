int setBit(int vara, int bita)
{
	vara |= (1 << bita);
	return vara;
}

int clearBit(int varb, int bitb)
{
	varb &= ~(1 << bitb);
	return varb;
}

int toggleBit(int varc, int bitc)
{
	varc ^= (1 << bitc);
	return varc;
}