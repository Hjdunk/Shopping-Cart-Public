#include "cart.h"

#include <vector>

void Cart ::add(const Item& its)
{
    inventory.push_back(its);
}