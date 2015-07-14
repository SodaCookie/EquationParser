#include "stdafx.h"
#include "Node.h"
#include <iostream>

Node::Node(std::string token_, std::shared_ptr<Node> owner_, std::shared_ptr<Node> left_, std::shared_ptr<Node> right_)
{
	token = token_;
	owner = owner_;
	left = left_;
	right = right_;
	std::cout << owner.get();
}

std::shared_ptr<Node> Node::get_left() const{
	return left;
}

std::shared_ptr<Node> Node::get_right() const{
	return right;
}

std::shared_ptr<Node> Node::get_owner() const{
	return owner;
}

std::string Node::get_token(){
	return token;
}