// $Id: enum_eigen_solver_type.h,v 1.2 2005-06-21 21:53:58 benkirk Exp $

// The Next Great Finite Element Library.
// Copyright (C) 2002-2005  Benjamin S. Kirk, John W. Peterson
  
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



#ifndef __enum_eigensolver_type_h__
#define __enum_eigensolver_type_h__

/*
 * The \p libMeshEnums namespace is the namespace all \p enum definitions
 * should be put into.
 */

// ------------------------------------------------------------
// enum SolverType definition
namespace libMeshEnums {
  
  /**
   * Defines an \p enum for iterative eigenproblem solver types
   */
  enum EigenSolverType {POWER=0,
			LAPACK,
			SUBSPACE,
			ARNOLDI,
			// SLEPc optional packages
			// EPSARPACK,
			// EPSLAPACK,
			// EPSBLZPACK,
			// EPSPLANSO,
			// EPSTRLAN,
		   
			INVALID_EIGENSOLVER};
}

using namespace libMeshEnums;

#endif // #define __enum_eigensolver_type_h__



