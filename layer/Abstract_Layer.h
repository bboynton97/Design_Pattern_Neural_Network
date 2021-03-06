//Honor Pledge:
//
//I pledge that I have neither given nor
//received any help on this assignment.
//
//brboynto

#ifndef _ABSTRACT_LAYER_H_
#define _ABSTRACT_LAYER_H_

#include "../node/Abstract_Node.h"
#include <vector>

//This is basically just a storage and organization object for nodes. It helps it fit the composite pattern better.

class Abstract_Layer {
public:
  virtual ~Abstract_Layer() {};
  virtual void addNode(Abstract_Node * node) = 0;
  virtual std::vector<Abstract_Node *> getLayer() = 0;
  virtual Abstract_Node * getNodeAt(int index) = 0;
  virtual int size() = 0;

protected:
  std::vector<Abstract_Node *> nodes;

};

#endif
