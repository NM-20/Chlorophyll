#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C3A8
   RuntimeId:        26DC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          071E
   VfTable:          0000000142366818
   Address (Base):   0000000143105F10
*/
#pragma pack(push, 8)
class BuffStateModifierData : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BuffStateModifierData) == 24);

}
