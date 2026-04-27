#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428333D0
   RuntimeId:        00F9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          061E
   VfTable:          00000001421E5238
   Address (Base):   00000001430B42D0
*/
#pragma pack(push, 8)
class Asset : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(Asset) == 24);

}
