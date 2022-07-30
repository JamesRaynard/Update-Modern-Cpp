#ifndef MEMORY_CARD_H
#define MEMORY_CARD_H

class MemoryCard {
    int capacity{1000};
public:
    class CardFull {};
    void store() {
        if (capacity == 0)
	    throw CardFull{};
	else
	    --capacity;
	}
};

#endif // MEMORY_CARD_H