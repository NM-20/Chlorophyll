#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C7C0
   RuntimeId:        1062
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          074E
   VfTable:          0000000142267840
   Address (Base):   00000001431126F0
*/
#pragma pack(push, 8)
class UnlockUserDataBase : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UnlockUserDataBase) == 24);

}
