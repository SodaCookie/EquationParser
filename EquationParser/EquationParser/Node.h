#pragma once

#include <string>
#include <memory>

class Node
{
	private:

		std::string token;
		std::shared_ptr<Node> left;
		std::shared_ptr<Node> right;
		std::shared_ptr<Node> owner;

	public:

		Node(std::string token_, 
			 std::shared_ptr<Node> owner_ = std::shared_ptr<Node>(nullptr), 
			 std::shared_ptr<Node> left_ = std::shared_ptr<Node>(nullptr), 
			 std::shared_ptr<Node> right_ = std::shared_ptr<Node>(nullptr));

		std::shared_ptr<Node> get_left() const;
		std::shared_ptr<Node> get_right() const;
		std::shared_ptr<Node> get_owner() const;
		std::string get_token();

};

