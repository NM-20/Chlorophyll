#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861A50
   RuntimeId:        1FC1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          075E
   VfTable:          0000000142344318
   Address (Base):   00000001430DA910
*/
#pragma pack(push, 8)
class CrazyOptionsAsset : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct CrazyOptionInfo) CrazyOptions; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CrazyOptionsAsset) == 32);

}
