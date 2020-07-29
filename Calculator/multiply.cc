#include "multiply.h"
#include "treeVisitor.h"


// constructor
Multiply::Multiply(std::shared_ptr<Tree> left, std::shared_ptr<Tree> right) :
	Tree {"*", left, right}
{}


// Multiply::accept(visitor) accepts visitor
std::string Multiply::accept(const TreeVisitor& visitor) const {
	return visitor.visit(*this);
}
