#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B0C8
   RuntimeId:        0F19
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          066F
   VfTable:          00000001422615A0
   Address (Base):   00000001431137D0
*/
#pragma pack(push, 8)
class UICombatAreaAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Prefix; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UICombatAreaAsset) == 32);

}
