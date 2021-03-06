#pragma once
#include "all.h"

class xBuffer;
class xTcpconnection;
class xConnector;

typedef std::shared_ptr<xTcpconnection> xTcpconnectionPtr;
typedef std::shared_ptr<xConnector> xConnectorPtr;
typedef std::function<void()> TimerCallback;
typedef std::function<void (const xTcpconnectionPtr&,void *)> ConnectionCallback;
typedef std::function<void (void *)> ConnectionErrorCallback;
typedef std::function<void (const xTcpconnectionPtr&)> CloseCallback;
typedef std::function<void (const xTcpconnectionPtr&)> WriteCompleteCallback;
typedef std::function<void (const xTcpconnectionPtr&, size_t)> HighWaterMarkCallback;
typedef std::function<void (const xTcpconnectionPtr&,xBuffer*,void *)> MessageCallback;




