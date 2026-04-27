#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/TransformProvider.h>

namespace fb
{

/* TypeInfo (Array): 00000001428351C0
   RuntimeId:        02A6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          109C
   VfTable:          00000001421EC5C8
   Address (Base):   000000014311A250
*/
#pragma pack(push, 8)
class TransformProvider_Composite : public TransformProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TransformProvider) LeftTransform; /* 0x0010 */
  FB_HANDLE(class TransformProvider) RightTransform; /* 0x0018 */
  FB_BOOLEAN AddTranslations; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TransformProvider_Composite) == 40);

}
