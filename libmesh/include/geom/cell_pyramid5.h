// $Id: cell_pyramid5.h,v 1.5 2005-01-28 19:14:16 benkirk Exp $

// The libMesh Finite Element Library.
// Copyright (C) 2002-2004  Benjamin S. Kirk, John W. Peterson
  
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
  
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
  
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA



#ifndef __cell_pyramid5_h__
#define __cell_pyramid5_h__

// C++ includes

// Local includes
#include "cell_pyramid.h"




/**
 * The \p Pyramid5 is an element in 3D composed of 5 nodes.
 * It is numbered like this:
   \verbatim
   PYRAMID5:
           4 
           o
          / \
         /   \
        /     \
     3 o-------o 2 
       |       |
       |       |
       o-------o
       0       1
   \endverbatim
 */

// ------------------------------------------------------------
// Pyramid class definition
class Pyramid5 : public Pyramid
{
public:

  /**
   * Constructor.  By default this element has no parent.
   */
  Pyramid5  (const Elem* p=NULL);
  
  /**
   * @returns \p PRYAMID
   */
  ElemType     type () const   { return PYRAMID5; }

  /**
   * @returns 1
   */
  unsigned int n_sub_elem() const { return 1; }
  
  /**
   * @returns FIRST
   */
  Order default_order() const { return FIRST; }
  
  /**
   * Builds a \p QUAD4 or \p TRI3 built coincident with face i. 
   * The \p AutoPtr<Elem> handles the memory aspect.
   */
  AutoPtr<Elem> build_side (const unsigned int i) const;

  virtual void connectivity(const unsigned int sc,
			    const IOPackage iop,
			    std::vector<unsigned int>& conn) const;
  
  /**
   * This maps the \f$ j^{th} \f$ node of the \f$ i^{th} \f$ side to
   * element node numbers.
   */
  static const unsigned int side_nodes_map[5][4];

  
protected:

  
#ifdef ENABLE_AMR
  
  /**
   * Matrix used to create the elements children.
   */
  float embedding_matrix (const unsigned int,
			 const unsigned int,
			 const unsigned int) const
  { error(); return 0.; }
  
#endif
};



// ------------------------------------------------------------
// Pyramid5 class member functions
inline
Pyramid5::Pyramid5(const Elem* p) :
  Pyramid(Pyramid5::n_nodes(), p) 
{
}



#endif
