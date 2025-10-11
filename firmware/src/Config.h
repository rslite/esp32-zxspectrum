#pragma once

class IFiles;

// Create the Config class as a singleton, globally available from the entire application
class Config 
{
private:
    Config() = default;
    ~Config() = default;

public:
    static Config& getConfig() {
        static Config instance;
        return instance;
    }

    // SDCard files
    IFiles *sdfiles = nullptr;
};