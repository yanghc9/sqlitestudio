#ifndef CLICOMMANDEXIT_H
#define CLICOMMANDEXIT_H

#include "clicommand.h"

class CliCommandExit : public CliCommand
{
    public:
        void execute();
        QString shortHelp() const;
        QString fullHelp() const;
        void defineSyntax();
};

#endif // CLICOMMANDEXIT_H