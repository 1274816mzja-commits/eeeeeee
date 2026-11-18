#ifndef FILE_SERIALIZER_H
#define FILE_SERIALIZER_H

#include "Text.h"

#include <string>
#include <unordered_map>

class FileSerializer {
private:
    std::unordered_map<std::string, Text> textsById;

    FileSerializer() = default;
    ~FileSerializer() = default;

    FileSerializer(const FileSerializer&) = delete;
    FileSerializer& operator=(const FileSerializer&) = delete;

public:
    static FileSerializer* GetInstance();

    void ParseFileByPath(std::string path);

    // Decisio: id de tipus string, coherent amb el mapa i NomaiText(string).
    Text GetTextById(std::string id);
};

#endif#pragma once
