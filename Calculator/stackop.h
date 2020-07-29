#ifndef __STACKOP_H__
#define __STACKOP_H__
#include <memory>
#include <vector>
#include <string>
#include "tree.h"


// reorganizes the stack based on the operation passed (push number or pop last two elements and push a new tree)
void reorganize(std::vector<std::shared_ptr<Tree>>& stack, const std::string& item, bool& invalid);


#endif
