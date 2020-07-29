#include "minus.h"
#include "treeVisitor.h"


// constructor
Minus::Minus(std::shared_ptr<Tree> left, std::shared_ptr<Tree> right) :
	Tree {"-", left, right}
{}


// Minus::accept(visitor) accepts visitor
std::string Minus::accept(const TreeVisitor& visitor) const {
	return visitor.visit(*this);
}
