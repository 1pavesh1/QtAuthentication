#ifndef INVOKERCOMMAND_H
#define INVOKERCOMMAND_H

# include <QRunnable>
#include "../CommandHandler/Commands/CommandDataBase.h"
#include "../CommandHandler/Commands/CommandServer.h"

class InvokerCommand : public QRunnable
{
    // Отправитель работает с командами, при нужном запросе, он руководит командами
};

#endif // INVOKERCOMMAND_H
