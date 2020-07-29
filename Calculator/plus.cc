#include "plus.h"
#include "treeVisitor.h"


// constructor
Plus::Plus(std::shared_ptr<Tree> left, std::shared_ptr<Tree> right) :
	Tree {"+", left, right}
{}


// Plus::accept(visitor) accepts visitor
std::string Plus::accept(const TreeVisitor& visitor) const {
	return visitor.visit(*this);
}
