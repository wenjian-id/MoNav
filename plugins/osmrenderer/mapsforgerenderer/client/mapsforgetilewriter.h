#ifndef MAPSFORGE_TILE_WRITER_H
#define MAPSFORGE_TILE_WRITER_H

#include <QObject>

#include "mapsforgerenderer/util/TileFactory.h"

#include <QFile>

class QImage;

class MapsforgeTileWriter : public QObject
{
	Q_OBJECT

public:
	MapsforgeTileWriter(const QString &fileName);
	~MapsforgeTileWriter();

public slots:
	void draw_image(int x, int y, int zoom, int magnification);

signals:
	void image_finished(int x, int y, int zoom, int magnification, const QImage &data);

private:
	QFile m_file;
	Mapsforge::TileFactory m_tileFactory;
};

#endif
