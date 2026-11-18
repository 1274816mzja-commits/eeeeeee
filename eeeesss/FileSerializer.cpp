#include "FileSerializer.h"

Text FileSerializer::GetTextById(std::string id) {
    auto it = textsById.find(id);

    if (it == textsById.end()) {
        return Text{};
    }

    return it->second;
}

// GetInstance i ParseFileByPath no s'implementen en aquesta resposta.
