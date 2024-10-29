//engineconfig.h
#ifndef ENGINECONFIG_H
#define ENGINECONFIG_H

#include <string>

class config {
public:
    std::string engine_path;
    std::string estr;

    bool loadcontents(config);

    //string engine config
    void strconfig(config* str, config engine)
    {
        if (str->estr == engine_path)
        {
            engine.loadcontents(engine) == true;
        }

    };

};

#endif
