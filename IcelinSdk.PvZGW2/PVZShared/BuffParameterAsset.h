#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C0D8
   RuntimeId:        26C4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0749
   VfTable:          0000000142366980
   Address (Base):   00000001430F7570
*/
#pragma pack(push, 8)
class BuffParameterAsset : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 HashKey; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BuffParameterAsset) == 32);

}
