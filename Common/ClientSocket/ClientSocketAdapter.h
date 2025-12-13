#ifndef CLIENTSOCKETADAPTER_H
#define CLIENTSOCKETADAPTER_H

#include "../Sockets/SocketsType/SocketAdapter.h"

class ClientSocketAdapter : public SocketAdapter {
    Q_OBJECT
public:
    explicit ClientSocketAdapter(QObject *parent);
};
// MainWidget::MainWidget(QWidget *parent) :
//     QWidget(parent), m_pForm(new Ui::Form()), m_pSock(new ClientSocketAdapter(this)) {
//     m_pForm->setupUi(this);
//     connect(m_pSock, SIGNAL(message(QString)), SLOT(on_message(QString)));
//     connect(m_pForm->send, SIGNAL(clicked()), SLOT(on_send()));
// }

// void MainWidget::on_message(QString text) {
//     m_pForm->messages->setHtml(m_pForm->messages->toHtml() + text + "<br>");
// }

// void MainWidget::on_send() {
//     m_pSock->sendString(m_pForm->message->text());
//     m_pForm->message->clear();
// }
#endif // CLIENTSOCKETADAPTER_H
