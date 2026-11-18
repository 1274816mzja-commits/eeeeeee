#include "NomaiText.h"
#include "FileSerializer.h"

NomaiText::NomaiText(std::string id)
    : interactionRange(0.0f),
    currentLine(0),
    isFullyRevealed(true) {

    Text text = FileSerializer::GetInstance()->GetTextById(id);

    if (text.textLines.empty()) {
        return;
    }

    for (const std::string& line : text.textLines) {
        nomaiTextLines.emplace_back(line);
    }

    isFullyRevealed = false;
}

void NomaiText::Interact() {
    if (isFullyRevealed) {
        return;
    }

    switch (nomaiTextLines[currentLine].GetVisualState()) {
    case LineState::Hidden:
        DisplayCurrentLine();
        break;

    case LineState::Displayed:
        TranslateCurrentLine();
        break;

    case LineState::Translated:
        ChangeCurrentLine();
        break;
    }
}

void NomaiText::DisplayCurrentLine() {
    nomaiTextLines[currentLine].Display();
}

void NomaiText::TranslateCurrentLine() {
    nomaiTextLines[currentLine].Translate();
}

void NomaiText::ChangeCurrentLine() {
    ++currentLine;

    if (currentLine >= static_cast<int>(nomaiTextLines.size())) {
        isFullyRevealed = true;
    }
}

// GetInteractionRange no s'implementa en aquesta resposta.