#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FCD8
   RuntimeId:        1341
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0611
   VfTable:          00000001422770A8
   Address (Base):   0000000143110230
*/
#pragma pack(push, 8)
class MorphPreset : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MorphPreset) == 16);

}
