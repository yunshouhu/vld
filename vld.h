////////////////////////////////////////////////////////////////////////////////
//  $Id: vld.h,v 1.19 2006/01/27 23:04:16 dmouldin Exp $
//
//  Visual Leak Detector (Version 1.0)
//  Copyright (c) 2005 Dan Moulding
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation; either version 2.1 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
//  See COPYING.txt for the full terms of the GNU Lesser General Public License.
//
////////////////////////////////////////////////////////////////////////////////

#pragma once

#ifdef _DEBUG

#pragma comment(lib, "vld.lib")

// Force a symbolic reference to the global VisualLeakDetector class object from
// the DLL. This enusres that the DLL is loaded and linked with the program,
// even though no code otherwise imports any of the DLL's exports.
#pragma comment(linker, "/include:__imp_?vld@@3VVisualLeakDetector@@A")

#endif // _DEBUG