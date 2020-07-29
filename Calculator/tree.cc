#include "tree.h"


// constructor
Tree::Tree(const std::string& operation, std::shared_ptr<Tree> left, std::shared_ptr<Tree> right) : 
	operation {operation},
	left {left}, 
	right {right} 
{}


// Tree::getOperation() returns the stored operation
std::string Tree::getOperation() const {
	return operation;
}


// Tree::getLeft() retrieves left branch of tree
std::shared_ptr<Tree> Tree::getLeft() const {
	return left;
}


// Tree::getRight() retrieves right branch of tree
std::shared_ptr<Tree> Tree::getRight() const {
	return right;
}
