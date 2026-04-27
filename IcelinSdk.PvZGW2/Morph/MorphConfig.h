#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FEC8
   RuntimeId:        1357
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07FF
   VfTable:          0000000142276FC0
   Address (Base):   0000000143110050
*/
#pragma pack(push, 8)
class MorphConfig : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MorphConfig) == 24);

}
