#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SequenceEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BE90
   RuntimeId:        0960
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A16
   VfTable:          0000000142212308
   Address (Base):   0000000143114EB0
*/
#pragma pack(push, 8)
class SequenceData : public SequenceEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(SequenceData) == 88);

}
