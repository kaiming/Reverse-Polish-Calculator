#ifndef __MINUS_H__
#define __MINUS_H__
#include "tree.h"


class Minus : public Tree {
  public:
	// constructor
	Minus(std::shared_ptr<Tree> left, std::shared_ptr<Tree> right);

	// accepts visitor
	std::string accept(const TreeVisitor& visitor) const override;
};


#endif
