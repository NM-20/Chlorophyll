#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B238
   RuntimeId:        0F2D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0961
   VfTable:          0000000142261180
   Address (Base):   0000000143113710
*/
#pragma pack(push, 8)
class EntryInputActionBindingsData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct EntryInputActionBinding) Bindings; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EntryInputActionBindingsData) == 24);

}
