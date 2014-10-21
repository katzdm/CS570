#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

// Standard C/C++ Headers
#include <memory>

template <typename T>
class ListNode {
  T value_;  // Value held in this node.
  std::shared_ptr<ListNode<T>> next_;  // Pointer to next node.

public:
  // Constructor: Takes initial node value as an argument.
  ListNode(const T& value) {
    this->value_ = value;
    this->next_ = nullptr;
  }

  ListNode& SetNext(const T& value) {
    if (this->next_ != nullptr) {
      this->next_->value_ = value;
    } else {
      this->next_.reset(new ListNode<T>(value));
    }
    return *this->next_;
  }

  ListNode& Next() {
    return *this->next_;
  }

  bool IsTail() {
    return (this->next_ == nullptr);
  }

  // Allows us to treat a ListNode as we would a "T"-object.
  // By casting to a "T"-reference, rather than a "T", we can
  // also use assignment syntax.
  operator T&() {
    return this->value_;
  }
};

// Using LinkedList<T> as an alias for ListNode<T>.
template <typename T>
using LinkedList = ListNode<T>;

#endif
