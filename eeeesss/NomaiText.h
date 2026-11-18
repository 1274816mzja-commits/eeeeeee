#ifndef NOMAI_TEXT_H
#define NOMAI_TEXT_H

#include "Interactable.h"
#include "NomaiTextLine.h"

#include <string>
#include <vector>

class NomaiText : public Interactable {
private:
    float interactionRange;
    std::vector<NomaiTextLine> nomaiTextLines;
    int currentLine;
    bool isFullyRevealed;

    void DisplayCurrentLine();
    void TranslateCurrentLine();
    void ChangeCurrentLine();

public:
    explicit NomaiText(std::string id);

    float GetInteractionRange();
    void Interact() override;
};

#endif#pragma once
