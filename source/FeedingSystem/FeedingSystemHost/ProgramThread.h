#pragma once
#include "stdafx.h"

class ProgramThread:public QThread
{
	Q_OBJECT
public:
	ProgramThread(QObject *parent = nullptr);
	~ProgramThread();
	
	QString filename;

	std::vector<int> processCommandLine(const QString& line, bool *ok = nullptr);

	void stop();

protected:
	void run() override;

	template <class T>
	size_t makeData(std::vector<T> data)
	{
		memset(buf, 0, sizeof(buf));
		memcpy_s(buf, maxBufLen, data.data(), data.size() * sizeof(T));
		return data.size() * sizeof(T);
	}

signals:
	void errorBoxRequested(const QString& text, const QString& info = QString(), const QString& title = QString());
	size_t sendData(char *data, size_t size);

private:
	bool running;
	const static size_t maxBufLen = 512;
	char buf[maxBufLen]{};
	std::map<QString, uint32_t> commandMap;
};

