#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CB70
   RuntimeId:        1098
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          116C
   VfTable:          0000000142267530
   Address (Base):   0000000143112630
*/
#pragma pack(push, 8)
class AlignmentData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 AlignAction; /* 0x0010 */
  FB_FLOAT32 StopTolerance; /* 0x0014 */
  FB_FLOAT32 Speed; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AlignmentData) == 32);

}
