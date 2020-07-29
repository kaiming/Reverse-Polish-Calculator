#ifndef __NUMBER_H__
#define __NUMBER_H__
#include "tree.h"


class Number : public Tree {
  public:
	// constructor
	Number(std::string num);

	// accepts visitor
	std::string accept(const TreeVisitor& visitor) const override;
};


#endif
