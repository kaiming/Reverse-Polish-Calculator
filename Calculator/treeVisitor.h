#ifndef __TREEVISITOR_H__
#define __TREEVISITOR_H__
#include <string>


class Number;
class Plus;
class Minus;
class Multiply;
class Divide;


class TreeVisitor {
  public:
	// visitor operations
	virtual std::string visit(const Number& num) const = 0;
	virtual std::string visit(const Plus& plus) const = 0;
	virtual std::string visit(const Minus& minus) const = 0;
	virtual std::string visit(const Multiply& mult) const = 0;
	virtual std::string visit(const Divide& divide) const = 0;
};


#endif
