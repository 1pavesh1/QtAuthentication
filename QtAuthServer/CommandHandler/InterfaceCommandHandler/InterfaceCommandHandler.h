#ifndef INTERFACECOMMANDHANDLER_H
#define INTERFACECOMMANDHANDLER_H

class InterfaceCommandHandler
{
public:
    virtual ~InterfaceCommandHandler() { }
    virtual void Execute() const = 0;
};

#endif // INTERFACECOMMANDHANDLER_H
