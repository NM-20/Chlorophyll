#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B9F8
   RuntimeId:        090C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FAE
   VfTable:          000000014220AAC8
   Address (Base):   0000000143115210
*/
#pragma pack(push, 16)
class TextSequenceItem : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Text; /* 0x0010 */
  Vec2 ScreenPosition; /* 0x0018 */
  FB_FLOAT32 TimeToShow; /* 0x0020 */
  char pad_0024[0x0004];
  FB_CSTRING TriggerEvent; /* 0x0028 */
  FB_BOOLEAN UseEntityScreenPosition; /* 0x0030 */
  char pad_0031[0x000F];
  Vec3 TextColor; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(TextSequenceItem) == 80);

}
