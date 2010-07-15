/*
Copyright 2010  Christian Vetter veaac.fdirct@gmail.com

This file is part of MoNav.

MoNav is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

MoNav is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with MoNav.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "osmrenderer.h"

OSMRenderer::OSMRenderer()
{
	settingsDialog = NULL;
}

OSMRenderer::~OSMRenderer()
{
	if ( settingsDialog != NULL )
		delete settingsDialog;
}

QString OSMRenderer::GetName()
{
	return "OSM Renderer";
}

OSMRenderer::Type OSMRenderer::GetType()
{
	return Renderer;
}

void OSMRenderer::SetOutputDirectory( const QString& )
{
}

void OSMRenderer::ShowSettings()
{
	if ( settingsDialog == NULL )
		settingsDialog = new ORSettingsDialog();
	settingsDialog->exec();
}

bool OSMRenderer::Preprocess( IImporter* )
{
	return true;
}

Q_EXPORT_PLUGIN2( osmrenderer, OSMRenderer )
