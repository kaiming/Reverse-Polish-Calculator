#ifndef __DIVIDE_H__
#define __DIVIDE_H__
#include "tree.h"


class Divide : public Tree {
  public:
	// constructor
	Divide(std::shared_ptr<Tree> left, std::shared_ptr<Tree> right);

	// accepts visitor
	std::string accept(const TreeVisitor& visitor) const override;
};


#endif
