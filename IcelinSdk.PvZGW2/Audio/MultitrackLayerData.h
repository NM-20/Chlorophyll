#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837D90
   RuntimeId:        054E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FD1
   VfTable:          00000001421F9B08
   Address (Base):   00000001431173D0
*/
#pragma pack(push, 8)
class MultitrackLayerData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinValue; /* 0x0010 */
  FB_FLOAT32 MaxValue; /* 0x0014 */
  FB_STDARRAY(FB_FLOAT32) Amplitudes; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MultitrackLayerData) == 32);

}
