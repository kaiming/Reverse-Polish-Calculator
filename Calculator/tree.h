#ifndef __TREE_H__
#define __TREE_H__
#include <memory>
#include <string>


class TreeVisitor;


class Tree {
	std::string operation;
	std::shared_ptr<Tree> left, right;

  public:
	// constructor
	Tree(const std::string& operation, std::shared_ptr<Tree> left, std::shared_ptr<Tree> right);
	std::string getOperation() const;
	virtual std::string accept(const TreeVisitor& visitor) const = 0;

	// gets left branch
	std::shared_ptr<Tree> getLeft() const;
	// gets right branch
	std::shared_ptr<Tree> getRight() const;
};


#endif
