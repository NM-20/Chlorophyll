#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286F0A8
   RuntimeId:        28C4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0612
   VfTable:          000000014236E450
   Address (Base):   00000001431055B0
*/
#pragma pack(push, 8)
class BlazeNews : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(BlazeNews) == 16);

}
