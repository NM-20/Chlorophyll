#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BC38
   RuntimeId:        093C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1115
   VfTable:          0000000142212500
   Address (Base):   00000001430DC710
*/
#pragma pack(push, 8)
class ForceManagerSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 VectorFieldNormValue; /* 0x0010 */
  FB_FLOAT32 VectorFieldCellSize; /* 0x0014 */
  FB_FLOAT32 VectorFieldPlanarHeightPosition; /* 0x0018 */
  FB_FLOAT32 VectorFieldSizeX; /* 0x001C */
  FB_FLOAT32 VectorFieldSizeY; /* 0x0020 */
  FB_FLOAT32 VectorFieldSizeZ; /* 0x0024 */
  FB_FLOAT32 VectorFieldCenterX; /* 0x0028 */
  FB_FLOAT32 VectorFieldCenterY; /* 0x002C */
  FB_FLOAT32 VectorFieldCenterZ; /* 0x0030 */
  FB_FLOAT32 VectorFieldPointSize; /* 0x0034 */
  FB_BOOLEAN WindEnable; /* 0x0038 */
  FB_BOOLEAN ForcesEnable; /* 0x0039 */
  FB_BOOLEAN DrawStats; /* 0x003A */
  FB_BOOLEAN DrawWindGraph; /* 0x003B */
  FB_BOOLEAN DrawBoundingVolumes; /* 0x003C */
  FB_BOOLEAN DrawSelectionBoundingVolumes; /* 0x003D */
  FB_BOOLEAN DrawSelectionVectorField; /* 0x003E */
  FB_BOOLEAN DrawSelectionForceVectorField; /* 0x003F */
  FB_BOOLEAN DrawPlanarVectorField; /* 0x0040 */
  FB_BOOLEAN DrawExternalVectorField; /* 0x0041 */
  FB_BOOLEAN VectorFieldEnableWind; /* 0x0042 */
  FB_BOOLEAN VectorFieldEnableSphere; /* 0x0043 */
  FB_BOOLEAN VectorFieldEnableCone; /* 0x0044 */
  FB_BOOLEAN VectorFieldEnableBaked; /* 0x0045 */
  FB_BOOLEAN VectorFieldCameraCentered; /* 0x0046 */
  FB_BOOLEAN VectorFieldArrow; /* 0x0047 */
  FB_BOOLEAN VectorFieldLockSelection; /* 0x0048 */
  char pad_0049[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ForceManagerSettings) == 80);

}
