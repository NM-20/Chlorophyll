#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A418
   RuntimeId:        0E72
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          064E
   VfTable:          000000014225F3D8
   Address (Base):   00000001430EE7A0
*/
#pragma pack(push, 8)
class RawFileAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(RawFileAsset) == 24);

}
