// SUPORT DE DEMOSTRACIO.
// No forma part dels sis metodes demanats.

#include "DemoSupport.h"
#include "../src/FileSerializer.h"
#include "../src/NomaiText.h"

std::vector<std::string>& DemoTrace() {
    static std::vector<std::string> trace;
    return trace;
}

FileSerializer* FileSerializer::GetInstance() {
    static FileSerializer instance;
    static bool initialized = false;

    if (!initialized) {
        instance.textsById["demo"] =
            Text{ { "Primera linia", "Segona linia" } };

        instance.textsById["empty"] = Text{};

        instance.textsById["42"] =
            Text{ { "Una sola linia" } };

        initialized = true;
    }

    return &instance;
}

NomaiTextLine::NomaiTextLine(std::string line)
    : textLine(line),
    visualState(LineState::Hidden) {
}

LineState NomaiTextLine::GetVisualState() const {
    return visualState;
}

void NomaiTextLine::Display() {
    visualState = LineState::Displayed;
    DemoTrace().push_back("Display: " + textLine);
}

void NomaiTextLine::Translate() {
    visualState = LineState::Translated;
    DemoTrace().push_back("Translate: " + textLine);
}

float NomaiText::GetInteractionRange() {
    return interactionRange;
}

// ParseFileByPath es deixa sense implementar;
// la demo utilitza dades fixes.