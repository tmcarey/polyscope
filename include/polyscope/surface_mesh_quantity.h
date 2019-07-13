#pragma once

#include "polyscope/quantity.h"
#include "polyscope/structure.h"


namespace polyscope {

// Forward delcare surface mesh
class SurfaceMesh;

// Extend Quantity<SurfaceMesh> to add a few extra functions
class SurfaceMeshQuantity : public Quantity<SurfaceMesh> {
public:
  SurfaceMeshQuantity(std::string name, SurfaceMesh& parentStructure, bool dominates = false);

public:
  // Notify that the geometry has changed
  virtual void geometryChanged();

  // Build GUI info about this element
  virtual void buildVertexInfoGUI(size_t vInd);
  virtual void buildFaceInfoGUI(size_t fInd);
  virtual void buildEdgeInfoGUI(size_t eInd);
  virtual void buildHalfedgeInfoGUI(size_t heInd);
};

} // namespace polyscope
