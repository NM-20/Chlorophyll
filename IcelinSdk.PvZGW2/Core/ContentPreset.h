#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833728
   RuntimeId:        012D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ED9
   VfTable:          00000001421E5108
   Address (Base):   000000014311C4D0
*/
#pragma pack(push, 8)
class ContentPreset : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ContentName; /* 0x0010 */
  FB_CSTRING ContentType; /* 0x0018 */
  FB_HANDLE(class DataContainer) ContentParameters; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ContentPreset) == 40);

}
