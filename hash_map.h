// Residual - Virtual machine to run LucasArts' 3D adventure games
// Copyright (C) 2003 The ScummVM-Residual Team (www.scummvm.org)
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA

#ifndef HASH_MAP_HH
#define HASH_MAP_HH

#ifdef _MSC_VER
#include <hash_map>
#else
#include <ext/hash_map>
#endif
#include <string>

#ifndef _MSC_VER
namespace std {
  using namespace __gnu_cxx;
};

namespace __gnu_cxx {
  template<> struct hash<std::string> {
    size_t operator()(const std::string &s) const {
      return std::hash<const char *>()(s.c_str());
    }
  };
}
#endif

#endif
