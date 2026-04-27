#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428544C8
   RuntimeId:        1734
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07B0
   VfTable:          00000001422AF308
   Address (Base):   000000014310DE90
*/
#pragma pack(push, 8)
class HeightfieldDecalAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_RESOURCEREF Resource; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(HeightfieldDecalAsset) == 32);

}
