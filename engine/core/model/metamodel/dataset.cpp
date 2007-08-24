/***************************************************************************
 *   Copyright (C) 2005-2007 by the FIFE Team                              *
 *   fife-public@lists.sourceforge.net                                     *
 *   This file is part of FIFE.                                            *
 *                                                                         *
 *   FIFE is free software; you can redistribute it and/or modify          *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA              *
 ***************************************************************************/

// Standard C++ library includes

// 3rd party library includes

// FIFE includes
// These includes are split up in two parts, separated by one empty line
// First block: files included from the FIFE root src directory
// Second block: files included from the same folder
#include "util/purge.h"
#include "model/metamodel/grids/cellgrid.h"

#include "dataset.h"
#include "object.h"

namespace FIFE { namespace model {

	Dataset::Dataset()
	{
	}

	Dataset::~Dataset() {
		purge(m_datasets);
		purge(m_objects);
	}

	Dataset* Dataset::addDataset() {
		Dataset* dataset = new Dataset();
		m_datasets.push_back(dataset);
		return dataset;
	}

	Object* Dataset::addObject(Object* inherited) {
		Object* object = new Object(inherited);
		m_objects.push_back(object);
		return object;
	}

}}
