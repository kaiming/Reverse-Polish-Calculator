#include "divide.h"
#include "treeVisitor.h"


// constructor
Divide::Divide(std::shared_ptr<Tree> left, std::shared_ptr<Tree> right) :
	Tree {"/", left, right}
{}


// Divide::accept(visitor) accepts visitor
std::string Divide::accept(const TreeVisitor& visitor) const {
	return visitor.visit(*this);
}
