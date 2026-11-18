#ifndef INTERACTABLE_H
#define INTERACTABLE_H

class Interactable {
public:
    virtual ~Interactable() = default;
    virtual void Interact() = 0;
};

#endif