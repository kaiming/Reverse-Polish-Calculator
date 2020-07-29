#include "number.h"
#include "treeVisitor.h"


// constructor
Number::Number(std::string num) : 
	Tree {num, nullptr, nullptr}
{}


// Number::accept(visitor) accepts a visitor
std::string Number::accept(const TreeVisitor& visitor) const {
	return visitor.visit(*this);
}
