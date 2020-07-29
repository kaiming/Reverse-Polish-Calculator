#ifndef __MULTIPLY_H__
#define __MULTIPLY_H__
#include "tree.h"


class Multiply : public Tree {
  public:
	// constructor
	Multiply(std::shared_ptr<Tree> left, std::shared_ptr<Tree> right);

	// accepts visitor
	std::string accept(const TreeVisitor& visitor) const override;
};


#endif
