#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

template <typename T>
class ListNode {
  T value_;  // Value held in this node.
  ListNode* next_;  // Pointer to next node.

public:
  // Constructor: Takes initial node value as an argument.
  ListNode(const T& value) {
    this->value_ = value;
    this->next_ = nullptr;
  }

  // Destructor: Deallocates all nodes following this one,
  // to ensure that all nodes are deleted.
  ~ListNode() {
    if (!this->IsTail()) {
      delete this->next_;
    }
  }

  ListNode& SetNext(const T& value) {
    this->next_ = new ListNode<T>(value);
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
