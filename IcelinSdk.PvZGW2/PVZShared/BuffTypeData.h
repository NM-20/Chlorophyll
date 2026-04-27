#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C158
   RuntimeId:        26CC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07A9
   VfTable:          0000000142366A48
   Address (Base):   0000000143105F70
*/
#pragma pack(push, 8)
class BuffTypeData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BuffTypeData) == 24);

}
