#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B9D8
   RuntimeId:        090A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          076E
   VfTable:          000000014220AB10
   Address (Base):   00000001430CE9F0
*/
#pragma pack(push, 8)
class TreeBase : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TreeBase) == 24);

}
