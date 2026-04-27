#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B9B8
   RuntimeId:        0908
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E9B
   VfTable:          000000014220AB20
   Address (Base):   00000001430CEA50
*/
#pragma pack(push, 8)
class TreeNodeBase : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING NodeName; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TreeNodeBase) == 24);

}
