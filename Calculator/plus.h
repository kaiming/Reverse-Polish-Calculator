#ifndef __PLUS_H__
#define __PLUS_H__
#include "tree.h"


class Plus : public Tree {
  public:
	// constructor
	Plus(std::shared_ptr<Tree> left, std::shared_ptr<Tree> right);

	// accepts visitor
	std::string accept(const TreeVisitor& visitor) const override;
};


#endif
