#ifndef NOMAI_TEXT_LINE_H
#define NOMAI_TEXT_LINE_H

#include <string>

// Interficie reconstruida: aquesta classe queda tapada a la fotografia.
enum class LineState {
    Hidden,
    Displayed,
    Translated
};

class NomaiTextLine {
private:
    std::string textLine;
    LineState visualState;

public:
    explicit NomaiTextLine(std::string line);

    LineState GetVisualState() const;
    void Display();
    void Translate();
};

#endif#pragma once
