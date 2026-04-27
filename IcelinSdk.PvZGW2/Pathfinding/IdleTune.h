#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428506F8
   RuntimeId:        13AB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07CE
   VfTable:          000000014227C790
   Address (Base):   00000001430FC4F0
*/
#pragma pack(push, 8)
class IdleTune : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 tetherDist; /* 0x0018 */
  FB_FLOAT32 returnDelay; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(IdleTune) == 32);

}
